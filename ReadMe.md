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
