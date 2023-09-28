#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void Matriz(int linhas, int colunas, int matriz[0][100]){

	srand(time(NULL));
	int l,j,a;
	
	for(l=0;l<linhas;l++){
		for(j=0;j<colunas;j++){
			a = rand() % 9 + 1;
			matriz[l][j] = a;
		}
	}
		
	printf("\n");
	for(l=0;l<linhas;l++){
		printf("\t");
		for(j=0;j<colunas;j++){
			printf(" %d ",matriz[l][j]);
		}
		printf("\n");
	}
}

void DiagonalPrincipal(int linhas, int colunas, int matriz[][100]){
	
	int l, j, c = -1, i;
	
	printf(" *** Diagonal Principal *** \n");
	for(l=0;l<linhas;l++){
		printf("\t");
		for(j=0;j<colunas;j++){
			c++;
			if(matriz[c][c] != 0){
				printf(" %d ",matriz[c][c]);
			}
		}
	}
}



int main(void){
	
	int linhas, colunas;
	
	printf("Digite o numero de linhas: ");
	scanf("%d",&linhas);
	printf("Digite o numero de colunas: ");
	scanf("%d",&colunas);
	
	int mat[100][100];
	
	Matriz(linhas,colunas,mat);
	DiagonalPrincipal(linhas,colunas,mat);
	
	return 0;
}
