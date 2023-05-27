#ifndef RANDOM_HPP
#define RANDOM_HPP
#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;

typedef struct Matriz{
char map[100][100];
int passos;	
int tam;
} Matrix;
	
typedef struct Mapa{
Matrix Matriz;
} Mapa;

int ReadMatrix(Mapa *mat);
int Random(Mapa *mat);
void Finalization(Mapa *mat);
 
#endif
