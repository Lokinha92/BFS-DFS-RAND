#include <iostream>
#include <fstream>
#include <cmath>
#include <ctime>
#include <chrono>
using namespace std;

typedef struct No No;
typedef struct Fila Fila;

struct No {
    int pos;
    No* prox;
};

struct Fila{
    No* primeiro;
    No* ultimo;
};

void inicia_fila(Fila* f);
bool vazia(Fila* f);
void enfilera(Fila* f, int val);
void desenfilera(Fila* f);
void mostra_fila(Fila* f);
void matrix_values(char *vet_values);
int matrix_size();
void limpa_fila(Fila* f);
int tamanho_fila(Fila* f);
void reseta_mat(char **mat, int tam);
void verifica_1(char *mat, int i, int j, int tam, Fila *linha, Fila *coluna);
void verifica_ast(char *mat, int i, int j, int tam, Fila *linha, Fila *coluna);
void log(char *mat, int tam);
void BFS();