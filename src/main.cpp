#include "dfs.hpp"
#include "bfs.hpp"
#include "random.hpp"

int main()
{
    DFS dfs;
    Mapa m;
    
    // DFS

    auto start = chrono::high_resolution_clock::now();
    dfs.lerArquivo();
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> duration = end - start;
    double seconds = duration.count();
    cout << "Tempo de execucao: " << seconds << " segundos" << endl;

    // BFS

    auto comeco = chrono::high_resolution_clock::now();
    BFS();
    auto fim = chrono::high_resolution_clock::now();
    chrono::duration<double> duracao = fim - comeco;
    double sec = duracao.count();
    cout << "Tempo de execucao: " << sec << " segundos" << endl;

    // RAND
    
    srand(time(NULL));
    ReadMatrix(&m);
    auto start2 = chrono::high_resolution_clock::now();
	Random(&m);
    auto end2 = chrono::high_resolution_clock::now();      
    chrono::duration<double> duration2 = end2 - start2;
    double seconds2 = duration2.count();
    cout << "Tempo de execucao: " << seconds2 << " segundos" << endl;
        
        

    return 0;
}
