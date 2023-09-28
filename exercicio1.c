#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h>


void matriz(int lin,int col,int colu[][100]){

	srand(time(NULL));
	int l,c,aleatorio;
	int matriz[lin][col];
	
	for (l=0;l<lin;l++){
		for (c=0;c<col;c++){
			aleatorio = rand() % 10;
			matriz[l][c] = aleatorio;
			colu[l][c] = matriz[l][c];

		}
	}
}

void printMatriz (int lin, int col,int colu[][100]){
	
	int l,c;
	
	for (l=0;l<lin;l++){
		for (c=0;c<col;c++){
			printf(" %d",colu[l][c]);
			if(c < col - 1){
				printf(" |");
			}
		}
		printf("\n");
	}
	
}

int main(void){
	
	int linhas, colunas,i, menorValor = INT_MAX,l,c;
	
	printf("Digite o numero de linhas da matriz:");
	scanf("%d",&linhas);
	
	printf("Digite o numero de colunas da matriz:");
	scanf("%d",&colunas);
	
	int colu[100][100];
	
	matriz(linhas,colunas,colu);
	printMatriz(linhas,colunas, colu);
	
	for(l=0;l<linhas;l++){
		for(c=0;c<colunas;c++){
			if(colu[l][c] < menorValor)
				menorValor = colu[l][c];
		}
	}
	
	printf("O menor valor da matriz: %d\n", menorValor);
	
	return 0;
	
}
