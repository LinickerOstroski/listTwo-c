#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void imprimeMatriz(int linhas,int colunas,int matriz[][100], int xi,int xf, int yi, int yf){
	
	int l,j;
	
	for(l=xi;l<xf;l++){
		for(j=yi;j<yf;j++){
			matriz[l][j] += 1;
			//cont++;
		}
	}
	
	for(l=0;l<linhas;l++){
		for(j=0;j<colunas;j++){
			printf(" %d ",matriz[l][j]);
		}
		printf("\n");
	}
}



void geraMatriz(int linhas, int colunas, int matriz[][100]){
	
	int l,j,a;
	
	for(l=0;l<linhas;l++){
		for(j=0;j<colunas;j++){
			matriz[l][j] = 0;
		}
	}
}


int main(void){
	
	srand(time(NULL));
	
	int mar[100][100] = {0},linhas = 10, colunas = 10, xi,xf,yi,yf,redes = 0,rep = 0, contador=0 ,l,j;
	
	printf("\tAREA OCEANO\n");
	geraMatriz(linhas,colunas,mar);
	imprimeMatriz(linhas,colunas,mar,xi,xf,yi,yf);
	
	
	printf("\nDigite o numero de redes:");
	scanf("%d",&redes);
	
	//system("cls");
	
	while(rep < redes){
	printf("Digite as coordenadas Rede [%d]\n",rep+1);
	printf("Leve em conta o INDEX 0\n");
	
	printf("Digite a linha inicial:");
	scanf("%d",&xi); 
	printf("Digite a linha final:");
	scanf("%d",&xf);
	
	printf("\n");
	
	printf("Digite a coluna inicial:");
	scanf("%d",&yi); 
	printf("Digite a coluna final:");
	scanf("%d",&yf);

	//system("cls");
	
	imprimeMatriz(linhas,colunas,mar,xi,xf,yi,yf);
	
	for (l = 0; l < linhas; l++) {
    	for (j = 0; j < colunas; j++) {
        	if (mar[l][j] > 0) {
           		contador = contador + 1;
        	}
    	}
	}
	
	rep++;
}
	
	printf("Area aproveitada: %d",contador);
	
	return 0;
	
}
	

