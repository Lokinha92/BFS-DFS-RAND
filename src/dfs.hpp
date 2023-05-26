#ifndef DFS_HPP
#define DFS_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <queue>
#include <stack>

#include <string.h>

using namespace std;

#define caminho 0
#define parede 1
#define perigo 2
#define visitado 3
#define final 4

class DFS {
private:
	int tamanho;
	int quantidaPassos;
	stack<pair<int, int>> pilha;
public:
	DFS();

	void lerArquivo();
	void testarMovimento(queue<pair<int, int>> &fila, vector<vector<int>> &matriz, vector<vector<int>> &matriz_aux, int x, int y);
	void percorreMatriz(vector<vector<int>> &matriz);
	void log(vector<vector<int>> &matriz_aux, int a, int b);
	void resultadoFinal();
	void tokenizar(string str, vector<vector<int>> &matriz);
};

#endif