#include "random.hpp"


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
	void Finalization(Mapa *mat)
{
	int i,j,n;
	n=mat->Matriz.tam;
	remove("dataset/outputRandom.data");
	FILE *g = fopen("dataset/outputRandom.data", "a");
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


  
  
  
  
