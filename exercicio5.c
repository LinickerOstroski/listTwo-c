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

void DiagonalSecundaria(int linhas, int colunas, int matriz[][100]){
	
	int l, j, c = colunas, linh = -1 , i;
	
	printf(" *** Diagonal Secundaria *** \n");
	for(l=0;l<linhas;l++){
		printf("\t");
		for(j=0;j<colunas;j++){
			linh++;
			c--;
			if(matriz[linh][c] != 0){
				printf(" %d ",matriz[linh][c]);
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
	DiagonalSecundaria(linhas,colunas,mat);
	
	return 0;
}
