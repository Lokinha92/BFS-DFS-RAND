#include "dfs.hpp"

DFS::DFS() {
	this->quantidaPassos = 0;

	FILE *file = fopen("dataset/log_dfs.data", "w");
	fclose(file);
}

void DFS::tokenizar(string str, vector<vector<int>> &matriz) {
	stringstream sstream(str);
	string token;

	vector<int> linha;
	while (getline(sstream, token, ' ')) {
		if (token.compare("*") == 0) {
			linha.push_back(perigo);
		} else if (token.compare("#") == 0) {
			linha.push_back(parede);
		} else if (token.compare("?") == 0) {
			linha.push_back(final);
		} else {
			linha.push_back(caminho);
		}
	}
	matriz.push_back(linha);
}

void DFS::lerArquivo() {
	vector<vector<int>> matriz;

	ifstream myfile;
	string line;

	myfile.open("dataset/input.data");
	int aux = true;

	vector<string> vec;
	string token;
	if (myfile.is_open()) {
		while (getline(myfile, line)) {
			if (aux)aux = false;
			else
				vec.push_back(line);
		}
		myfile.close();
	} else cout << "erro ao abrir arquivo" << endl;

	int cont = 0;
	for (auto &v1 : vec) {
		if (++cont < vec.size()) {
			v1 = v1.substr(0, v1.size() - 1);
		}
		tokenizar(v1, matriz);
	}

	tamanho = matriz.size();
	percorreMatriz(matriz);
}

void DFS::testarMovimento(queue<pair<int, int>> &fila, vector<vector<int>> &matriz, vector<vector<int>> &matriz_aux, int x, int y) {
	//cout << x << " " << y << endl;
	if (y + 1 < tamanho) {
		if (matriz_aux[x][y + 1] == caminho || matriz[x][y + 1] == perigo || matriz[x][y + 1] == final) {
			fila.push(make_pair(x, y + 1));
			pilha.push(make_pair(x, y));
			return;
		}
	}
	if (x + 1 < tamanho) {
		if (matriz_aux[x + 1][y] == caminho || matriz[x + 1][y] == perigo || matriz[x + 1][y] == final) {
			fila.push(make_pair(x + 1, y));
			pilha.push(make_pair(x, y));
			return;
		}
	}
	if (y - 1 >= 0) {
		if (matriz_aux[x][y - 1] == caminho || matriz[x][y - 1] == perigo || matriz[x][y - 1] == final) {
			fila.push(make_pair(x, y - 1));
			pilha.push(make_pair(x, y));
			return;
		}
	}
	if (x - 1 >= 0) {
		if (matriz_aux[x - 1][y] == caminho || matriz[x - 1][y] == perigo || matriz[x - 1][y] == final) {
			fila.push(make_pair(x - 1, y));
			pilha.push(make_pair(x, y));
			return;
		}
	}
	if (pilha.empty()) {
		return;
	}
	pair<int, int> topo = pilha.top();
	pilha.pop();
	fila.push(make_pair(topo.first, topo.second));
}

void DFS::percorreMatriz(vector<vector<int>> &matriz) {
	queue<pair<int, int>> fila;

	fila.push(make_pair(0, 0));
	vector<vector<int>> matriz_aux;

	for (auto &v1 : matriz) {
		vector<int> linha_aux;
		for (auto &v2 : v1) {
			if (v2 == parede) {
				linha_aux.push_back(parede);
			} else if (v2 == perigo) {
				linha_aux.push_back(perigo);
			} else if (v2 == final) {
				linha_aux.push_back(final);
			} else {
				linha_aux.push_back(0);
			}
		}
		matriz_aux.push_back(linha_aux);
	}

	while (!fila.empty()) {
		quantidaPassos++;
		pair<int, int> frente = fila.front();

		int a = frente.first;
		int b = frente.second;

		if (matriz[a][b] == final) {
			cout << "DFS Chegou ao final" << endl;
			break;
		}

		matriz_aux[a][b] = visitado;

		fila.pop();
		testarMovimento(fila, matriz, matriz_aux, a, b);
		if (fila.empty()) {
			cout << "Não há caminho" << endl;
			break;
		}

		if (matriz[a][b] == perigo) {
			matriz[a][b] = caminho;
			while (!fila.empty()) {
				fila.pop();
			}
			while (!pilha.empty()) {
				pilha.pop();
			}
			fila.push(make_pair(0, 0));
			for (int i = 0; i < tamanho; i++) {
				for (int j = 0; j < tamanho; j++) {
					if (matriz_aux[i][j] != parede && matriz_aux[i][j] != perigo && matriz_aux[i][j] != final) {
						matriz_aux[i][j] = caminho;
					}
				}
			}
		}
	}
	printf("Quantidade de passos DFS: %d\n", this->quantidaPassos);
	log(matriz_aux, -1, -1);
	resultadoFinal();
}

void DFS::log(vector<vector<int>> &matriz_aux, int a, int b) {
	FILE *file = fopen("dataset/log_dfs.data", "a");

	if (file == NULL) {
		cout << "Erro ao abrir arquivo de log" << endl;
	} else {
		fprintf(file, "%d %d\n", a, b);
		for (auto &v1 : matriz_aux) {
			for (auto &v2 : v1) {
				if (v2 == parede) {
					fprintf(file, "# ");
				} else if (v2 == perigo) {
					fprintf(file, "* ");
				} else if (v2 == visitado) {
					fprintf(file, "1 ");
				} else if (v2 == final) {
					fprintf(file, "? ");
				} else {
					fprintf(file, "0 ");
				}
				// fprintf(file, "%d ", v2);
			}
			fprintf(file, "\n");
		}
		fprintf(file, "\n");
	}
	fclose(file);
}

void DFS::resultadoFinal() {
	FILE *file = fopen("dataset/resultado_final.data", "w");

	if (file == NULL) {
		cout << "Erro ao abrir arquivo de resultado" << endl;
	} else {
		fprintf(file, "Quantidade de passos DFS: %d\n", this->quantidaPassos);
	}
	fclose(file);
}
