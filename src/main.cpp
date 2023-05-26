#include "dfs.hpp"
#include "bfs.hpp"

int main()
{
    DFS dfs;

    auto start = chrono::high_resolution_clock::now();
    dfs.lerArquivo();
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> duration = end - start;
    double seconds = duration.count();
    cout << "Tempo de execução: " << seconds << " segundos" << endl;

    //

    auto comeco = chrono::high_resolution_clock::now();
    BFS();
    auto fim = chrono::high_resolution_clock::now();
    chrono::duration<double> duracao = fim - comeco;
    double sec = duracao.count();
    cout << "Tempo de execução: " << sec << " segundos" << endl;

    return 0;
}