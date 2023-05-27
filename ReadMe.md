<h1 align = center> Labirinto por Profundidade (DFS), Largura (BFS) e Randomicamente</h1>
<h2 align = center>  🧩 OBJETIVO </h2>

<p><strong>Apresentar diferentes técnicas de caminhamento em labirinto e estabelecer comparações entre elas.</strong></p>

<h2 align = center>  🧭 REGRAS: </h2> 

- O caminhamento deve ocorrer em uma única matriz de tamanho N x N
- --
- Quatro tipos de elementos vão compor a matriz e srão espalhados aleatoriamente: (a) item de passagem livre (número 1 na posição da matriz); (b) item de dano, indicado pelo carácter ‘*’; (c) paredes definidas como ‘#’ e; por fim, (d) uma ‘?’ que indica o alvo da exploração.
- --
- O alvo (?) estará posicionado de forma randômica na matriz em qualquer uma das posições tidas como válidas.
- --
- Tem-se como regra a condição de dano. Consideramos dano o item ‘*’, o qual obriga o algoritmo a voltar no estágio inicial de execução e reiniciar novamente do zero toda a execução.
Ao sofrer um dano o algoritmo deve demarcar a posição com o item 1, neutralizando o mesmo e abrindo novas possibilidades de caminhamento / rotas até o estágio de finalização.

<h2 align=center>📚BIBLIOTECAS UTILIZADAS</h2>
- Durante a implementação do algoritmo, as bibliotecas utilizadas foram:

<table align=center>
     <tr>
        <td> std::iostream </td>    
    </tr>
    <tr>
        <td> std::string </td>    
    </tr>
        </tr>
        <tr>
        <td>string.h</td>
    </tr>
    <tr>
        <td>fstream</td>
    </tr>
        <tr>
        <td>vector</td>
    </tr>
        </tr>
        <tr>
        <td>sstream</td>
    </tr>
        </tr>
        <tr>
        <td>stack</td>
    </tr>
        </tr>
        <tr>
        <td>queue</td>
    </tr>
        </tr>
        <tr>
        <td>cmath</td>
    </tr>
        </tr>
        <tr>
        <td>ctime</td>
    </tr>
        </tr>
        <tr>
        <td>chrono</td>
    </tr>
</table>

<h2 align = center>📄 ARQUIVOS UTILIZADOS</h2>

<h3><b>Arquivos de codificação: </b></h3>
<table>
<tr>
        <td> main.cpp </td>    
    </tr>
    <tr>
        <td> bfs.hpp </td>    
    </tr>
    <tr>
        <td>bfs.cpp</td>
    </tr>
        <tr>
        <td> dfs.hpp </td>    
    </tr>
    <tr>
        <td>dfs.cpp</td>
    </tr>
        <tr>
        <td> random.hpp </td>    
    </tr>
    <tr>
        <td>random.cpp</td>
    </tr>
</table>

<b> main.cpp: Contém o código que será executado pelo terminal</b>

<b> bfs.hpp: Contém a declaração das bibliotecas, structs para a estrutura de fila e as funções utilizadas com seus parâmetros para o funcionamento do método de busca em largura</b>

<b> bfs.cpp: Contém a implementação do funcionamento das funções utilizadas no método de busca em largura</b>

<b> dfs.hpp: </b>

<b> dfs.cpp: </b>

<b> random.hpp: </b>

<b> random.cpp: </b>

<strong>OBS: Os arquivos com extensão ".hpp" deve estar incluso aos arquivos "main.cpp" e também aos seus respectivos arquivos com extensão ".cpp"</strong>

<h3><b>Arquivos de leitura: </b></h3>
<table>
<tr>
        <td> input.data </td>    
    </tr>
    <tr>
        <td> matrix.txt </td>    
    </tr>
</table>

<b>input.data: Contém em sua primeira linha a quantidade de linhas e colunas que as matrizes geradas terão e, no resto do documento, os valores que irão compor essas matrizes</b>

<b>matrix.data: Contém a matriz que será lida para o método de busca em largura (BFS)</b>

<h3><b>Arquivos de saída: </b></h3>
<table>
<tr>
        <td> log_bfs.data </td>    
    </tr>
    <tr>
        <td> log_dfs.data </td>    
    </tr>
        <tr>
        <td> outputRandom.data </td>    
    </tr>
        </tr>
        <tr>
        <td> resultado_final.data </td>    
    </tr>
</table>

<b> log_bfs.data: Contém o caminho adotado na matriz pelo método de busca em largura (BFS).</b>

<b> log_dfs.data: Contém o caminho adotado na matriz pelo método de busca em profundidade (DFS).</b>

<b> outputRandom.data: Contém o caminho adotado na matriz pelo método randômico de busca.</b> 

<b> resultado_final.data: Contém o número de iterações feitas pelo método de busca em profundidade (DFS). </b>

<h2 align = center> 💡ALGORITMO </h2>

- O primeiro método executado é o método de busca por profundidade (DFS).
Uma variável do tipo abstrato DFS é iniciada, a contagem do tempo de execução é iniciada, a busca é realizada e o tempo de execução é exibido ao fim da busca, assim como o número de iterações.

```c++
    DFS dfs;
    auto start = chrono::high_resolution_clock::now();
    dfs.lerArquivo();
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> duration = end - start;
    double seconds = duration.count();
    cout << "Tempo de execucao: " << seconds << " segundos" << endl;
```

- Ao fim da execução do método de busca em profundidade, o método de busca em largura (BFS) é executado.
A contagem do tempo de execução é iniciada, a busca é realizada chamando a função "BFS()" e, ao fim da busca, o tempo de execução e o número de iterações é exibido.

```c++
    auto comeco = chrono::high_resolution_clock::now();
    BFS();
    auto fim = chrono::high_resolution_clock::now();
    chrono::duration<double> duracao = fim - comeco;
    double sec = duracao.count();
    cout << "Tempo de execucao: " << sec << " segundos" << endl;
```

- Por ultimo, o método de busca randômico é executado.
Uma variável do tipo abstrato Mapa é iniciada e passada como parâmetro para a função "ReadMatrix()".
Após isso, a contagem do tempo de execução é iniciada, a busca é realizada e o tempo de execução é exibido no terminal, assim como o número de iterações feitas na busca.

```c++
    Mapa m;
    srand(time(NULL));
    ReadMatrix(&m);
    auto start2 = chrono::high_resolution_clock::now();
	Random(&m);
    auto end2 = chrono::high_resolution_clock::now();      
    chrono::duration<double> duration2 = end2 - start2;
    double seconds2 = duration2.count();
    cout << "Tempo de execucao: " << seconds2 << " segundos" << endl;
```
<h2 align = center> 🔍 MAIS SOBRE OS MÉTODOS DE BUSCA </h2>
<h3 align = center> BUSCA EM LARGURA (BFS)</h3>
<p>Na teoria dos grafos, busca em largura (ou busca em amplitude, também conhecido em inglês por Breadth-First Search - BFS) é um algoritmo de busca em grafos utilizado para realizar uma busca ou travessia num grafo e estrutura de dados do tipo árvore. Intuitivamente, você começa pelo vértice raiz e explora todos os vértices vizinhos. Então, para cada um desses vértices mais próximos, exploramos os seus vértices vizinhos inexplorados e assim por diante, até que ele encontre o alvo da busca. (Wikipedia)</p>
<p>O BFS é um algoritmo clássico de busca em grafos que explora sistematicamente todos os vértices de um grafo a partir de um vértice inicial. Ele garante que todos os vértices sejam visitados em uma ordem crescente de suas distâncias em relação ao vértice inicial. Em outras palavras, o BFS visita os vértices em camadas, começando pelo vértice inicial e avançando para seus vizinhos antes de explorar vértices mais distantes. (Chat GPT)</p>

<p></p>
