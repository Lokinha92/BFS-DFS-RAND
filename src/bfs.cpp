#include "bfs.hpp"

void inicia_fila(Fila *f)
{
    f->primeiro = f->ultimo = nullptr;
}

bool vazia(Fila *f)
{
    return (f->primeiro == nullptr);
}

void enfilera(Fila *f, int val)
{
    No *NovoNO = new No;
    NovoNO->pos = val;
    NovoNO->prox = nullptr;
    if (vazia(f))
    {
        f->primeiro = f->ultimo = NovoNO;
    }
    else
    {
        f->ultimo->prox = NovoNO;
        f->ultimo = NovoNO;
    }
}

void desenfilera(Fila *f)
{
    if (vazia(f))
    {
        cout << "FILA VAZIA!" << endl;
    }
    else
    {
        // int removeu = f->primeiro->pos; // o que ta removendo
        No *remove = f->primeiro;
        f->primeiro = f->primeiro->prox;
        delete remove;
    }
}

void mostra_fila(Fila *f)
{
    if (vazia(f))
    {
        cout << "FILA VAZIA!!" << endl;
    }
    No *espaco = f->primeiro;
    while (espaco)
    {
        cout << espaco->pos << " ";
        espaco = espaco->prox;
    }
    cout << endl;
}

int matrix_size()
{
    char aux;
    int matrix_tam;
    ifstream file;
    file.open("./dataset/matrix.data");

    if (file.is_open())
    {
        while (file >> aux)
        {
            matrix_tam++;
        }
    }

    file.close();
    return sqrt(matrix_tam);
}

void matrix_values(char *vet_values)
{
    char aux;
    int k = 0;
    ifstream file;
    file.open("./dataset/matrix.data");

    if (file.is_open())
    {
        while (file >> aux)
        {
            vet_values[k] = aux;
            k++;
        }
    }

    file.close();
}

void limpa_fila(Fila *f)
{
    while (!vazia(f))
    {
        desenfilera(f);
    }
}

void reseta_mat(char *mat, int tam)
{
    int i = 0, j = 0;

    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
            if (*((mat + i * tam) + j) == 'v')
            {
                *((mat + i * tam) + j) = '1';
            }
        }
    }
}

void verifica_1(char *mat, int i, int j, int tam, Fila *linha, Fila *coluna)
{
    if (((i >= 0 && i <= tam - 1) && (j >= 0 && j <= tam - 1)) && *((mat + i * tam) + j) == '1')
    {
        *((mat + i * tam) + j) = 'v';
        enfilera(linha, i);
        enfilera(coluna, j);
    }
}

void verifica_ast(char *mat, int i, int j, int tam, Fila *linha, Fila *coluna)
{
    if (((i >= 0 && i <= tam - 1) && (j >= 0 && j <= tam - 1)) && *((mat + i * tam) + j) == '*')
    {
        *((mat + i * tam) + j) = '1';
        reseta_mat(mat, tam);
        limpa_fila(linha);
        limpa_fila(coluna);
        enfilera(linha, 0);
        enfilera(coluna, 0);
    }
}

void log(char *mat, int tam){
    
    fstream log;
    log.open("./dataset/log_bfs.data");
    int i, j;

    if (log.is_open())
    {
        for (i = 0; i < tam; i++)
        {
            for (j = 0; j < tam; j++)
            {
                log << *((mat + i * tam) + j) << " ";
            }
            log << endl;
        }

        log.close();
    }
}

void BFS()
{
    int tam = matrix_size(), k = 0;
    char mat[tam][tam], vet_values[tam * tam], vet_log[tam * tam];

    matrix_values(vet_values);

    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            mat[i][j] = vet_values[k];
            k++;
        }
    }

    Fila linha, coluna;
    inicia_fila(&linha);
    inicia_fila(&coluna);
    int cont = 0, i_final = -1, j_final = -1;

    // Identificando a posição do alvo
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            if (mat[i][j] == '?')
            {
                i_final = i;
                j_final = j;
                mat[i][j] = '1';
                break;
            }
        }
    }

    if (i_final == -1)
    {
        cout << "O ALVO NÃO FOI IDENTIFICADO NA MATRIZ!" << endl
             << endl;
        return;
    }

    // Setando a posição de início
    enfilera(&linha, 0);
    enfilera(&coluna, 0);
    mat[0][0] = 'v';

    int i, j;

    while (!vazia(&linha))
    {
        i = linha.primeiro->pos;
        j = coluna.primeiro->pos;

        if (i == i_final && j == j_final)
        {
            break;
        }

        desenfilera(&linha);
        desenfilera(&coluna);

        verifica_1((char *)mat, i + 1, j, tam, &linha, &coluna); // baixo
        verifica_1((char *)mat, i, j - 1, tam, &linha, &coluna); // esq
        verifica_1((char *)mat, i - 1, j, tam, &linha, &coluna); // p cima
        verifica_1((char *)mat, i, j + 1, tam, &linha, &coluna); // direita

        verifica_ast((char *)mat, i + 1, j, tam, &linha, &coluna); // baixo
        verifica_ast((char *)mat, i, j - 1, tam, &linha, &coluna); // esq
        verifica_ast((char *)mat, i - 1, j, tam, &linha, &coluna); // p cima
        verifica_ast((char *)mat, i, j + 1, tam, &linha, &coluna); // direita

        cont++;
    }
    mat[i_final][j_final] = '?';

    log((char *)mat, tam);
    

    cout << "\nBFS CHEGOU AO FINAL!" << endl;
    cout << "Quantidade de passos BFS: " << cont << endl;
}
