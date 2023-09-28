#include<stdio.h>
#include<stdlib.h>

void Matriz(int linhas, int colunas, int matriz[0][100]){
	
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

void MatrizMult (int linhas, int colunas, int matriz[0][100],int escalar){
	
	int l,j,mult[100][100];
	
	for(l=0;l<linhas;l++){
		for(j=0;j<colunas;j++){
			mult[l][j] = matriz[l][j] * escalar;
		}
	}
	
	printf("\n");
	for(l=0;l<linhas;l++){
		printf("\t");
		for(j=0;j<colunas;j++){
			printf(" %d ",mult[l][j]);
		}
		printf("\n");
	}
}

	

int main(void){
	
	srand(time(NULL));
	
	int l = 3, j = 3,escalar;
	int mat1[100][100];
	
	
	Matriz(l,j,mat1);
	
	printf("\nDigite o numero escalar:");
	scanf("%d",&escalar);
	
	MatrizMult(l,j,mat1,escalar);
	getchar();
	printf("\n*** Cada elemento da Matriz foi multiplicado pelo escalar ***\n");
	getchar();
	
	
	
	
	
	return 0;
}
