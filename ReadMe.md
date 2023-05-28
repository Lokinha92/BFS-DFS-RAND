<h1 align = center> AEDS I</h1>
<h1 align = center> Labirinto por Profundidade (DFS), Largura (BFS) e Randomicamente</h1>

<strong><p align = center> GUSTAVO HENRIQUE D'ANUNCIAÇÃO FERREIRA</p></strong>
<strong><p align = center> YGOR SANTOS VIEIRA</p></strong>
<strong><p align = center> RAFAEL HENRIQUE REIS COSTA</p></strong>
<h2 align = center>  🧩 OBJETIVO </h2>

<p><strong>Apresentar diferentes técnicas de caminhamento em labirinto e estabelecer comparações entre elas.</strong></p>

<h2 align = center>  🧭 REGRAS: </h2> 

- O caminhamento deve ocorrer em uma única matriz de tamanho N x N.
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
            </tr>
        <tr>
        <td>string</td>
    </tr>
    
</table>

<h2 align = center>  🗺️ MAPA </h2>

### Tabela de Símbolos do Labirinto

A estrutura padrão de matriz que é utilizada contém os seguintes símbolos:
| Símbolo              | Significado                                                                                                             | 
| ---------------------| -------------------------------------------------------------------------------------------------                       |
| #                    | `Parede`   Não é possível passar por essa casa                                                                          |
| *                    | `Perigo`  O caminhamento reinicia ao passar por essa casa, depois disso essa casa se transforma em '1'                  |
| 1                    | `Passagem Livre`   É possível passar por essa casa                                                                      |
| ?                    | `Objetivo`   O caminhamento finaliza ao passar por essa casa                                                            |

# Exemplo de Entrada
![This is an image](https://github.com/RafaelReisyzx/Labirinto-DFS-BFS-Random/blob/main/imgs/exemplo1.png)


O labirinto é composto por uma matriz quadrada. Acima, podemos ver um exemplo do arquivo input.data. Na primeira linha, temos dois números inteiros que servem para configurar as estruturas do labirinto. O primeiro e o segundo número representam as linhas e colunas das matrizes. Esses números precisam ser iguais, pois está configurado para matrizes quadradas. As linhas seguintes são as linhas que constroem a matriz que será lida. Ela precisa estar separada por espaços, conforme mostrado no exemplo. O caminhamento se inicia no ponto (0,0) e finaliza no ponto contendo o objetivo "?".

<h2 align = center>📄 ARQUIVOS UTILIZADOS</h2>

<h3 align = center><b>Arquivos de codificação: </b></h3>
<table align = center>
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

<b> bfs.cpp: Contém a implementação do funcionamento das funções utilizadas no método de busca em largura</b>

<b> dfs.hpp: Contém a declaração das bibliotecas e a classe utilizada, além de atribuir números para o
caminho,parede,perigo,visitado e final.</b>

<b> random.hpp: Contém a definição da struct utilizada para representar a matriz, além das declarações das funções utilizadas no programa.</b>

<b> random.cpp: Contém as implementações das funções declaradas no arquivo random.hpp </b>

<strong>OBS: Os arquivos com extensão ".hpp" deve estar incluso aos arquivos "main.cpp" e também aos seus respectivos arquivos com extensão ".cpp"</strong>

<h3 align = center><b>Arquivos de leitura: </b></h3>
<table align = center>
<tr>
        <td> input.data </td>    
    </tr>
</table>

<b>input.data: Contém em sua primeira linha a quantidade de linhas e colunas que as matrizes terão e, no resto do documento, os valores que irão compor essas matrizes</b>

<h3 align = center><b>Arquivos de saída: </b></h3>
<table align = center>
<tr>
        <td> log_bfs.data </td>    
    </tr>
    <tr>
        <td> log_dfs.data </td>    
    </tr>
        <tr>
        <td> log_random.data </td>    
    </tr>
        </tr>
        <tr>
        <td> resultado_final.data </td>    
    </tr>
</table>

<b> log_bfs.data: Contém o caminho adotado na matriz pelo método de busca em largura (BFS).</b>

<b> log_dfs.data: Contém o caminho adotado na matriz pelo método de busca em profundidade (DFS).</b>

<b> log_random.data: Contém o caminho adotado na matriz pelo método randômico de busca.</b> 

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

<p>Em síntese, podemos trazer a lógica da busca em largura para o caminhamento de matrizes NxN, como é o caso deste algorítmo. A matriz é tratada como um grafo, onde cada elemento representa um vértice. O BFS percorre os elementos das posições não visitadas, explorando seus vizinhos antes de partir para as proximas posições. Isso garante que os elementos sejam visitados em uma ordem crescente em relação a sua distância com a posição inicial da busca. Em outras palavras, a busca ocorre em um "formato de onda" onde sua área se expande a cada iteração.
A busca é controlada por uma estrutura de fila, onde a posição, ou vértice, atual da busca é representada pelo primeiro valor da fila. </p>

<div align = center> <img align src = /img/BFS.gif> </div>

<p>No caso desta implementação do método BFS, a busca ocorre em um labirinto em formato de matriz, que segue as regras citadas ao começo do documento. Essa matriz é lida do arquivo "input.data" (dataset/input.data) e deve obrigatóriamente ser uma matriz quadrada de tamaho NxN. Eis um exemplo de entrada do arquivo "input.data" de uma matriz de formato 10x10</p>

<div align = center> <img align src = /img/exemplo_entrada.png> </div>

<h4 align = center>👨‍💻 CODIFICAÇÃO DO MÉTODO DE BUSCA EM LARGURA (BFS)</h4>
<strong><p align = center> bfs.hpp (src/bfs.hpp)</p></strong>

Como dito anteriormente, o arquivo "bfs.hpp" contém a declaração de todas as bibliotecas e funções utilizadas pelo algoritmo.

De início, as bibliotecas e o namespace são declarados.

```c++
#include <iostream>
#include <fstream>
#include <cmath>
#include <ctime>
#include <chrono>
using namespace std;
```

Logo após, as structs que compõem a estrutura de fila são declaradas.

```c++
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
```

A struct "No" representa as posições da fila, e armazena o valor inteiro que vai controlar o método de busca, representado a linha e a coluna atual da busca na matriz.

A struct "Fila" representa a estrutura de fila propriamente dita. E contém os ponteiros para o primeiro e ultimo elemento da fila.

Em seguida, as funções usadas durante a implementação do BFS são declaradas.

Primeiro, as funções que envolvem a estrutura de fila são declaradas:

```c++
// funções da fila
void inicia_fila(Fila* f);
bool vazia(Fila* f);
void enfilera(Fila* f, int val);
void desenfilera(Fila* f);
void mostra_fila(Fila* f);
void limpa_fila(Fila* f);
```

A função "inicia_fila()" serve para iniciar uma fila vazia;

A função "vazia()" verifica se uma fila tem elementos ou não;

"enfilera()" adiciona um item ao final da fila.

"desenfilera()" remove o primeiro elemento da fila.

"mostra_fila()" mostra todos os elementos da fila.

"limpa_fila()" remove todos os elementos da fila de uma vez.

Todas as funções recebem a fila em questão como parâmetro, e a função "enfilera()" recebe como parâmeto, além da fila, o valor inteiro a ser adicionado à fila.

Depois, são declaradas as funções que envolvem a montagem e reinicio da matriz

```c++
// funções da matriz
void matrix_values(char *vet_values);
int matrix_size();
void reseta_mat(char **mat, int tam);
```

A função "matrix_values()" recebe um vetor do tipo char como parâmetro, e serve para ler a matriz do arquivo "input.data" e armazenar os caracteres no vetor.

"matrix_size()" retorna a dimensão da matriz lida do arquivo "input.data"

"reseta_mat()" serve para resetar os valores da matriz quando a busca atinge um "*", e recebe como parâmetro a matriz em questão e um inteiro que representa a dimensão da matriz.

Por fim, as funções de verificação da matriz, e a função principal do BFS são declaradas.

```c++
// funções de verificação, log e função principal
void verifica_1(char *mat, int i, int j, int tam, Fila *linha, Fila *coluna);
void verifica_ast(char *mat, int i, int j, int i_inicio, int j_inicio, int tam, Fila *linha, Fila *coluna);
void log(char *mat, int tam);
void BFS();
```

"verifica_1()" verifica se a posição passada como parâmetro pela matriz tem o caractere '1' como valor e executa as açoes necessárias para o BFS.

"verifica_ast()" verifica se a posição passada como parâmetro pela matriz tem o caractere '*' como valor e executa as açoes necessárias para o BFS.

As duas funções recebem como parâmetro a matriz em questão, a posição a ser verificada (i e j), e as filas que fazem controle do método de busca.

"log()" recebe a matriz em questão, e um inteiro que representa a dimensão da matriz. Serve para exportar o caminho tomado pelo método dentro da matriz para o arquivo "log_bfs.data"(dataset/log_bfs.data).

"BFS()" é a função principal, e executa todos os passos necessários para o funcionamento do método de busca em largura.

<strong><p align = center> bfs.cpp (src/bfs.cpp)</p></strong>

Seguindo a ordem das declarações no arquivo bfs.hpp, a implementação do funcionamento das funções é feito, de acordo com as descrições anteriores.

Primeiro, as funções que envolvem a estrutura de fila
```c++
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

void limpa_fila(Fila *f)
{
    while (!vazia(f))
    {
        desenfilera(f);
    }
}

```

Depois as funções que envolvem a matriz em questão

```c++
int matrix_size()
{
    string tam;
    int cont = 0;
    ifstream file;
    file.open("./dataset/input.data");

    if (file.is_open())
    {
        while (cont != 2)
        {
            getline(file, tam, ' ');
            cont++;
        }
    }

    return stoi(tam);
}

void matrix_values(char *vet_values)
{
    char aux;
    int k = 0;
    ifstream file;
    file.open("./dataset/input.data");

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
```

Agora, em uma abordagem mais detalhada, segue a maneira que o método foi implementado, tendo como funções principais "verifica_1()",  "verifica_ast()", "log()" e "BFS()"

```c++
void BFS()
{
    int tam = matrix_size(), k = 4;
    char mat[tam][tam], vet_values[(tam * tam)+4];

    matrix_values(vet_values);
```

A princípio, a dimensão da matriz lida do arquivo "input.data" é armazenada na variável "tam", a variável k é inicializada em 4 para que a leitura seja feita a partir do primeiro item da matriz (ela servirá como um contador na hora de armazenar os valores do vetor "vet_values" para a matriz), a matriz "mat" é inicializada com as dimensões dadas pelo valor de tam, e o vetor "vet_values" é inicializado com a dimensão dado pelo valor de tam², já que, a quantidade de elementos de uma matriz é dado pelo número de linhas (i) multiplicado pelo número de colunas (j). Depois o vetor "vet_values" é passado como parâmetro da função "matrix_values()" para que os valores sejam lidos do arquivo "input.data" e para dentro do vetor.

A seguir, os valores que compõem a matriz armazenados no vetor "vet_values" são transferidos para a matriz "mat".
```c++
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            mat[i][j] = vet_values[k];
            k++;
        }
    }
```

Depois, as filas que vão controlar a busca são declaradas e inicializadas. Também são declaradas as variáveis i_final e J_final, elas servirão para verificar a existência do alvo ('?') na matriz.

Note que as variáveis i_final e j_final são inicializadas com o valor -1. Isso por que o alvo pode estar em qualquer posição, e valores negativos não fazem parte do domínio analisado na matriz

A variável cont também é declarada e inicializada em 0, ela representa o número de iterações feitas pelo BFS.

```c++
    Fila linha, coluna;
    inicia_fila(&linha);
    inicia_fila(&coluna);
    int cont = 0, i_final = -1, j_final = -1;
```

Em seguida, a existência do caractere alvo ('?') é verificado. Caso ele seja identificado na matriz, o índice referente a sua posição na matriz (linha e coluna) é armazenado nas variáveis i_final e j_final, respectivamente. Se não, uma mensagem de erro é exibida no terminal.

```c++
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
```

Aqui, chegamos a parte da função onde a busca é configurada e ocorre de fato.

Primeiramente, a posição de início é definida através do valor contido nas variáveis i_inicio, j_inicio, para alterá-la basta modificar o valor das variáveis. Depois de definida a posição inicial, ela é adicionada à sua respectiva fila para que a busca comece. A posição de inicio é marcada como visitada.

Também são declaradas as variáveis i e j, que vão representar a linha e coluna atual onde a busca se encontra.

```c++
    // Setando a posição de início

    int i_inicio = 0;
    int j_inicio = 0;

    enfilera(&linha, i_inicio);
    enfilera(&coluna, j_inicio);
    mat[i_inicio][j_inicio] = 'v';

    int i, j;
```
Enfim, a busca finalmente acontece. Vamos a uma visão mais a fundo dela:

```c++
// BFS !!

    while (!vazia(&linha))
    {
        i = linha.primeiro->pos;
        j = coluna.primeiro->pos;

        if (i == i_final && j == j_final)
        {
            cont ++;
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
```

A busca ocorrerá enquanto existirem elementos nas filas. Como durante toda a busca, o número de elementos das filas de linha e coluna serão sempre o mesmo, basta que a verificação no loop while seja feita em apenas uma das filas para que a busca aconteça.

O primeiro passo da busca, é acessar o primeiro elemento das filas de linha e coluna, e atribuir ao valor de i e j respectivamente.

Em seguida, é verificado se a posição atual da busca é a posição do caractere alvo ('?'). Caso seja, o contador de iterações é incrementado e a busca é encerrada, se não, a busca continua.

Após essa verificação, a posição atual do processamento é desenfileirada para que a próxima posição visitada seja a primeira da fila, e seja processada após a verificação.

A verificação é feita "em blocos" de forma que seja verificado o valor das posições vizinhas abaixo, a esquerda, acima e a direita (nessa ordem de prioridade) da posição de processamento atual.

O primeiro bloco de verificação, verifica se a posição vizinha é o caractere '1', utilizando a função "verifica_1":

```c++
void verifica_1(char *mat, int i, int j, int tam, Fila *linha, Fila *coluna)
{
    if (((i >= 0 && i <= tam - 1) && (j >= 0 && j <= tam - 1)) && *((mat + i * tam) + j) == '1')
    {
        *((mat + i * tam) + j) = 'v';
        enfilera(linha, i);
        enfilera(coluna, j);
    }
}
```

A função "Verifica_I" verifica se o índice do valor verificado pertente ao domínio da matriz, e se o valor verificado corresponde ao caractere '1'. 
Caso a verificação seja verdadeira, a posição é marcada como visitada e o valor do índice da linha e da coluna são adicionados à sua respectiva fila para que seus vizinhos também sejam analizados e processados.

Caso o vizinho da posição atual de processamento não seja um caminho livre (caractere '1'), é verificado através da função "verifica_ast' se o valor do vizinho corresponde ao caractere '*'.

```c++
void verifica_ast(char *mat, int i, int j, int i_inicio, int j_inicio, int tam, Fila *linha, Fila *coluna)
{
    if (((i >= 0 && i <= tam - 1) && (j >= 0 && j <= tam - 1)) && *((mat + i * tam) + j) == '*')
    {
        *((mat + i * tam) + j) = '1';
        reseta_mat(mat, tam);
        limpa_fila(linha);
        limpa_fila(coluna);
        enfilera(linha, i_inicio);
        enfilera(coluna, j_inicio);
    }
}
```
A função "Verifica_ast" verifica se o índice do valor verificado pertente ao domínio da matriz, e se o valor verificado corresponde ao caractere '*'. 

Seguindo as regras, a posição contendo o '*' é definida como '1' e se torna um caminho livre para passagem. Isso da margem para novas possibilidades de caminho até o alvo.
Após isso, as posições já visitadas são novamente transformadas em '1', através da função "reseta_mat". As filas são limpas, e é adicionado o índice inicial em ambas as filas, significando que a execução voltou ao inicio.

Ao fim da verificação de um índice, o contador de iterações é incrementado, sinalizando que a busca avançou para a próxima posição.

Caso a busca fique "presa" entre paredes e não consiga mais proseguir rumo ao alvo, a fila se esvazia, a busca é encerrada e o caminho tomado e o número de iterações se limitam até aquele momento da busca.

Atingindo o alvo, ou não, ao fim de todas as verificações, a posição do alvo é novamente substituída pelo caractere '?'. A função "log" é usada para mostrar o caminho tomado pelo BFS até o fim da busca. A matriz contendo o caminho é gravada no arquivo "log_bfs.data".

Finalmente, uma mensagem é exibida no terminal para dizer que a busca chegou ao fim, juntamente com o número de iterações feitas durante ela.

```c++
    mat[i_final][j_final] = '?';

    log((char *)mat, tam);
    

    cout << "\nBFS CHEGOU AO FINAL!" << endl;
    cout << "Quantidade de passos BFS: " << cont << endl;
}
```

<h3 align = center> BUSCA EM PROFUNDIDADE (DFS)</h3>

A busca em profundidade (DFS) é um algoritmo utilizado para percorrer ou buscar itens dentro das estruturas de dados grafos ou árvores. Sua característica básica é percorrer todos os nós filhos ao nó raiz o mais profundo possível para somente depois retroceder. Iremos compreender a aplicação dessa mecânica no decorrer desse algoritmo.
Existem várias formas de implementar uma busca em profundidade. Pela natureza de percorrer o grafo ou árvore enquanto houverem filhos não visitados, uma solução natural é utilizar recursão. Outra abordagem é utilizar um algoritmo iterativo e utilizar uma pilha (LIFO) para controlar os nós a serem visitados.

--------------------
<div align = center> <img align src = ./img/DFSimg.png> </div>


Na primeira fase da execução do algoritmo, ele coloca a posição inicial (0, 0) do labirinto na pilha. Em seguida, ele verifica a posição a direita e percorre-a até encontrar um obstáculo ou chegar ao fim do labirinto, empilhando todas as posições percorridas. Durante esse processo, as posições já percorridas são marcadas e não podem ser percorridas novamente. A fila é utilizada para determinar a ordem em que as posições devem ser exploradas pelo algoritmo. No início, a posição inicial (0, 0) é adicionada à fila. A cada iteração do loop principal do algoritmo, a posição da frente da fila é removida e examinada. Se essa posição levar a novos caminhos disponíveis, essas posições são adicionadas à fila, permitindo que sejam exploradas posteriormente.

```c++
void DFS::testarMovimento(queue<pair<int, int>> &fila, vector<vector<int>> &matriz, vector<vector<int>> &matriz_aux, int x, int y) {
	if (y + 1 < tamanho) {
		if (matriz_aux[x][y + 1] == caminho || matriz[x][y + 1] == perigo || matriz[x][y + 1] == final) {
			fila.push(make_pair(x, y + 1));
			pilha.push(make_pair(x, y));
			return;
		}
	}
}
```
Quando o algoritmo encontra uma barreira, ele procura por outras direções para seguir, começando pela direita, depois para baixo, esquerda e acima, se necessário. Se o algoritmo ficar preso entre barreiras, ele desempilha a posição atual e atribui o valor 1 a ela, indicando que não deve mais ser percorrida, e continua em busca de uma nova posição viável.

"percorreMatriz(vector<vector<int>>& matriz)": Essa é a função principal do algoritmo DFS. Ela recebe a matriz do labirinto como argumento. A função cria uma fila vazia e adiciona a posição inicial (0, 0) à fila. Também cria uma matriz auxiliar com as mesmas dimensões do labirinto para acompanhar as posições visitadas.

A função executa um loop enquanto a fila não estiver vazia. A cada iteração, ela incrementa a quantidade de passos. A posição da frente da fila é obtida e armazenada nas variáveis a e b.

Se a posição atual for a posição final, a função imprime uma mensagem informando que o DFS chegou ao final do labirinto e interrompe o loop.

A matriz auxiliar é atualizada para marcar a posição atual como visitada. A posição da frente é removida da fila e a função testarMovimento é chamada para verificar as possíveis movimentações a partir dessa posição. Se a fila estiver vazia neste ponto, significa que não há mais caminho disponível.

Se a posição atual for um perigo, o algoritmo redefine o labirinto e a matriz auxiliar, esvazia a fila e a pilha, adiciona a posição inicial novamente à fila e atualiza a matriz auxiliar para marcar todas as posições não pertencentes a paredes, perigos ou a posição final como caminho.

```c++
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
    }
}
```

O algoritmo imprime o número de passos necessários para alcançar o final do labirinto. Por fim, ele imprime novamente o labirinto, destacando as posições visitadas durante o percurso com o valor 1.

```c++
	printf("Quantidade de passos DFS: %d\n", this->quantidaPassos);
	log(matriz_aux, -1, -1);
	resultadoFinal();
```
<h3 align = center> MÉTODO RANDÔMICO</h3>

A busca randômica é um método heurístico que faz escolhas aleatórias para explorar o espaço de busca até que o objetivo seja encontrado. A principal característica desse algoritmo é a falta de uma estratégia direcionada, o que significa que não há garantia de que o objetivo será encontrado ou de que será encontrado em um tempo razoável.

# Funções 

- ReadMatriz: lê uma matriz existente de um arquivo chamado "input.data". A matriz é armazenada na estrutura de dados do programa para ser manipulada posteriormente.
 ```c++
int ReadMatrix(Mapa *mat){
    int linhas = 0, colunas = 0 , i, j;
    char c;
    FILE *f = fopen("dataset/input.data", "r");
    if (f == NULL){
        cout << "Erro ao abrir o arquivo.\n";
        exit(EXIT_FAILURE);
    }
        fscanf(f, "%d %d", &linhas, &colunas);

    for (i = 0; i < linhas; i++) {
    for (j = 0; j < colunas; j++) {
        c = fgetc(f);
    while (isspace(c)){
        c = fgetc(f);
    }
    if (c == '#'){
    if (i == 0 && j == 0){  
        c ='1';
    }
    } 
        mat->Matriz.map[i][j] = c;

    }  
    }
        mat->Matriz.tam=linhas;
        fclose(f);
    return 0; 
}
```
- Random: é o algoritmo de caminhamento aleatório na matriz. Ele inicia na posição inicial do caminhante e realiza movimentos aleatórios em direções possíveis (cima, baixo, esquerda, direita e diagonais) até encontrar a casa objetivo marcada com '?'. Durante o caminhamento, o algoritmo demarca as paredes do labirinto, evitando passar por elas. O número de passos realizados é contado e armazenado na estrutura de dados do programa.

Ordem de etapas dentro da função Random:
1. **Verificar casa** : Nesta etapa, o algoritmo verifica o tipo de casa em que está atualmente. Existem duas possibilidades:
+ Perigo: Se a casa atual for um perigo, o caminhamento é reiniciado e a casa atual se torna uma casa '1' de passagem livre
+ Objetivo: Se a casa atual for o objetivo, isso significa que o algoritmo chegou ao destino desejado. Nesse caso, a execução do algoritmo é encerrada.
2. **Demarcar paredes**: Após verificar o tipo de casa atual, o algoritmo demarca as paredes da casa. Isso significa que registra as direções que não podem ser seguidas. 
3. **Escolher caminho**: Com base nas informações coletadas na etapa anterior, o algoritmo escolhe forma aleatória um caminho possível para prosseguir. Ele seleciona uma direção disponível que não esteja marcada como parede.
4. **Caminhar**: Nesta etapa, o algoritmo efetivamente caminha pela opção selecionada na etapa anterior.

```c++
int Random(Mapa *mat){

	int i=0,j=0,r=0,data=0,n,Direita=0,Esquerda=0,Baixo=0,Cima=0,DiagonalEsquerdaSuperior=0,DiagonalDireitaSuperior=0,DiagonalEsquerdaInferior=0,DiagonalDireitaInferior=0;   
	n=mat->Matriz.tam;
	mat->Matriz.passos=0;
	for(;;){		 

	//1° Etapa Verificador de casa
	
    if(mat->Matriz.map[i][j]=='*'){	 
        mat->Matriz.map[i][j]='1';
        i=0;
        j=0;      
    }else if(mat->Matriz.map[i][j]=='?'){	
     cout << "\nRANDOM CHEGOU AO FINAL!";
        cout<<"\nQuantidade de Passos: "<<mat->Matriz.passos;
        cout << "\n";
        mat->Matriz.passos=0;	
	Finalization(mat);
     break;
    }
	//2° Etapa Demarcar Paredes
	//cima
	if(mat->Matriz.map[i-1][j]=='#'){
		Cima=-1;
	}
	//baixo
	if(mat->Matriz.map[i+1][j]=='#'){
		Baixo=-1;
	}
	//esquerda
	if(mat->Matriz.map[i][j-1]=='#'){
		Esquerda=-1;
	}
	//direita
	if(mat->Matriz.map[i][j+1]=='#'){
		Direita=-1;
	}
	//diagonal superior esquerda
	if(mat->Matriz.map[i-1][j-1]=='#'){
		DiagonalEsquerdaSuperior=-1;
	}
	//diagonal superior direita
	if(mat->Matriz.map[i-1][j+1]=='#'){
		DiagonalDireitaSuperior=-1;
	}
	//diagonal inferior esquerda
	if(mat->Matriz.map[i+1][j-1]=='#'){
		DiagonalEsquerdaInferior=-1;
	}
	//diagonal inferior direita
	if(mat->Matriz.map[i+1][j+1]=='#'){
		DiagonalDireitaInferior=-1;
	}
    //3° Etapa Escolher caminho possivel de caminhar
	for(r=0;r<1;){
	    data = rand()%8;
	if(data==1&&Cima!=-1&&i>0){
        r=1;
	}else if(data==2&&Baixo!=-1&&i<n-1){
	    r=1;
	}else if(data==3&&Esquerda!=-1&&j>0){
	    r=1;		
	}else if(data==4&&Direita!=-1&&j<n-1){
	    r=1;
	}else if(data==5&&DiagonalDireitaSuperior!=-1&&i>0&&j<n-1){
	    r=1;	
	}else if(data==6&&DiagonalEsquerdaSuperior!=-1&&i>0&&j>0){
        r=1;
	}else if(data==7&&DiagonalDireitaInferior!=-1&&i<n-1&&j<n-1){
	    r=1;		
	}else if(data==8&&DiagonalEsquerdaInferior!=-1&&i<n-1&&j>0){
	    r=1;	
	}	
   }
    //4° Etapa Caminhar
	
	if(data==1){
	    i=i-1;
	    mat->Matriz.passos++;
	}else if(data==2){
	    i=i+1;
	    mat->Matriz.passos++;
	}else if(data==3){		
	    j=j-1;
	    mat->Matriz.passos++;
	}else if(data==4){
	    j=j+1;
	    mat->Matriz.passos++;
	}else if(data==5){
	    i=i-1;
	    j=j+1;
	    mat->Matriz.passos++;
	}else if(data==6){
	    i=i-1;
	    j=j-1;
	    mat->Matriz.passos++;	
	}else if(data==7){
	    i=i+1;
	    j=j+1;
	    mat->Matriz.passos++;
	}else if(data==8){
        i=i+1;
	    j=j-1;
	    mat->Matriz.passos++;
	}else
	{		
	}
 	    Cima=0;
		Baixo=0;
		Direita=0;
		Esquerda=0;
		DiagonalDireitaSuperior=0;
		DiagonalEsquerdaSuperior=0;
		DiagonalDireitaInferior=0;
		DiagonalEsquerdaInferior=0;
		r=0;

	}

	return 0;
		}
```

-Finalization(): função responsável por criar um arquivo log_random.data contendo o mapa atualizado após o caminhamento Randômico.

```c++
	void Finalization(Mapa *mat)
{
	int i,j,n;
	n=mat->Matriz.tam;
	remove("dataset/log_random.data");
	FILE *g = fopen("dataset/log_random.data", "a");
    if (g == NULL) {
        cout <<"Erro ao abrir o arquivo para atualização\n";
        exit(EXIT_FAILURE);
    }
	
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			 fprintf(g, "%c ", mat->Matriz.map[i][j]);
		}
		 fprintf(g, "\n");
	}
	
}
```

<h2 align=center>🧠 DISCUSSÃO</h2>

Após o processo de análise e de submeter os algoritmos a testes com diferentes matrizes de diferentes tamanhos, algumas perguntas podem ser levantadas e discutidas:

- 1: Para diferentes tamanhos de matriz e posicionamento das paredes, há predominância de um dos algoritmos em termos de iterações e tempo de execução?

- 2: Algum dos algoritmos é capaz de encontrar o melhor caminho, ou seja, o com o menor número de iterações?

<h2 align = center>🔚 Conclusão </h2>

Após submeter os 3 algoritmos a testes com diferentes matrizes de diferentes tamanhos, registramos os tempos de execução em uma tabela.

<div align = center> <img align src = ./img/tabela_1.png> </div>
<div align = center> <img align src = ./img/tabela_2.png> </div>


## BFS

- No método de busca em largura, o tempo de execução e o número de iterações pode variar de acordo com a dimensão da matriz, com a distribuição das paredes pela matriz, ou seja, pela quantidade de caminhos disponíveis para chegar até o alvo, e também com a distância do caractere alvo em relação ao ponto de início da busca.

- Levando em conta a dimesão da matriz, de forma geral, o BFS tende a ser mais eficiente em matrizes de tamanho médio (entre 20x20 e 51x51), para o caso de matrizes maiores, o desempenho do BFS pode variar de acordo com os outros parâmetros citados.

- O BFS é muito afetado pela quantidade de paredes, já que explora os dados em blocos e, por isso, pode percorrer caminhos maiores para contorna-las.

- Em relação a posição do alvo na matriz, para uma localização do alvo mais proxima à origem da busca, o BFS tende a ser mais eficiente, devido ao seu método de exploração em camadas. Porém, em uma localização mais distante do alvo, o BFS pode apresentar um número de iterações maior, assim como o seu tempo de execução em relação aos outros métodos, devido aos problemas de dimensão da matriz e distribuição das paredes.

- Nesta implementação, o custo é dominado pela leitura da matriz do arquivo input.data e pelo loop while onde a busca acontece. Ambas as condições estão diretamente relacionadas com o tamanho da matriz. Com isso, podemos dizer que o custo para essa implementação é O(tam²), onde tam é o tamanho da matriz.

## DFS

- No caso do DFS, ele pode ser mais rápido em alguns casos, mas pode não encontrar a solução mais curta. Isso ocorre porque o DFS segue um caminho até o final antes de voltar e explorar outras alternativas, o que pode levar a caminhos mais longos. No entanto, o DFS pode ser útil em situações em que o caminho mais curto não é necessariamente o mais importante, como em jogos em que o objetivo é explorar o mapa ou encontrar itens.
Além disso, é importante lembrar que o desempenho de cada algoritmo pode variar dependendo do tamanho e da complexidade do labirinto.
- Em matrizes menores, como 10x10 e 20x20, o algoritmo DFS pode encontrar soluções rapidamente, enquanto em matrizes maiores, como 50x50 e 100x100, o tempo de execução pode aumentar significativamente. Portanto, é importante testar os algoritmos em diferentes cenários para entender suas limitações e escolher a abordagem mais adequada para o problema em questão.

## Randômico

- O desempenho do algoritmo de caminhamento aleatório em termos de tempo de execução e consumo de recursos pode variar dependendo do tamanho do labirinto e da densidade de obstáculos. Em labirintos grandes ou com muitos obstáculos, o algoritmo pode levar mais tempo para encontrar o caminho objetivo, pois a probabilidade de escolher uma direção livre diminui.
- O algoritmo de caminhamento aleatório pode se comportar de maneira diferente em labirintos com múltiplas soluções ou com obstáculos e desvios. Em labirintos com múltiplas soluções, o algoritmo pode encontrar caminhos diferentes em execuções diferentes, explorando as várias opções disponíveis. No entanto, em labirintos com obstáculos complexos e desvios, o algoritmo pode ter dificuldade em encontrar o caminho objetivo devido à aleatoriedade de suas escolhas.
- Em resumo, O custo da busca randômica depende de vários fatores, como o tamanho do espaço de busca, a localização do estado objetivo e a sorte do algoritmo ao escolher os próximos estados para explorar. Em alguns casos favoráveis, a busca randômica pode encontrar o objetivo rapidamente, enquanto em outros casos pode levar muito tempo ou até mesmo não encontrar o objetivo. O custo da busca randômica é altamente imprevisível e não pode ser expresso em uma análise assintótica.

- --

- Com relação ao tópico 2 da discussão, podemos dizer que o BFS é capaz de encontrar o caminho mais curto em termos de iterações, devido ao fato de explorar os vizinhos mais próximos da origem da busca antes de avançar mais. Isso garante que quando o algoritmo atinge o alvo, o caminho tomado foi o mais curto possível em termos de iterações.


<h2 align = center>📈 Resultados esperados</h2>

É esperado que, a partir de uma mesma entrada para os 3 algoritmos, eles sejam capazes de percorrer o labirinto rumo ao caractere alvo realizando a busca de acordo com o que cada um deles se propõe e seguindo as regras descritas, exibindo ao final o tempo de execução e o número de iterações feitas no processo. Isso permitirá uma análise dos 3 métodos, comparando seus tempos de execução e a quantidade de iterações.

Utilizando a seguinte matriz como entrada para os 3 algoritmos, podemos exemplificar o funcionamento.

<div align = center> <img align src = /img/exemplo_entrada.png> </div>

A partir da leitura dessa matriz, os métodos devem ser executados e suas iterações e tempo de execução devem ser mostrados no terminal, dessa forma:

<div align = center> <img align src = /img/resultado_esperado.png> </div>

Nota-se que, por se tratar de um "caminho fechado", o BFS e o DFS fazem o mesmo número de iterações, porém com tempos distintos. Já o método randômico faz mais iterações e em um tempo diferente também.


<h2 align = center>🔧 Compilação e execução </h2>
</h2>


A pasta do repositorio possui um arquivo Makefile que contém as instruções para compilar e executar. Para usar essas instruções, você pode usar o terminal do seu sistema
operacional e navegar até o diretório raiz do projeto.

Existem três comandos principais que você pode usar no Makefile:


| Comando                |  Função                                                                                           |                     
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `make clean`          | Apaga a última compilação realizada contida na pasta build                                        |
|  `make`                | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build           |
|  `make run`            | Executa o programa da pasta build após a realização da compilação                                 |

Em resumo, para executar o programa, você precisa navegar até o diretório raiz do projeto e executar o comando make para compilar o programa e, em seguida, 
executar o comando make run para executá-lo.Se você precisar limpar a compilação anterior, pode usar o comando make clean antes de executar a compilação.

