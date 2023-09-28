#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void geraMatrizes(int linhas, int colunas, int matriz1[][100]){
	
	int l,j,a;
	
	for(l=0;l<linhas;l++){
		//printf("Linha [%d]\n",l+1);
		for(j=0;j<colunas;j++){
			printf("Digite a linha [%d] coluna [%d]: ",l+1,j+1);
			scanf("%d",&matriz1[l][j]);
		}
	}		
}

void imprime(int linhas, int colunas, int matriz1[][100]){
	
	int l,j;
	
	printf("\n");
	for(l=0;l<linhas;l++){
		for(j=0;j<colunas;j++){
			printf(" %d ", matriz1[l][j]);
		}
		printf("\n");
	}
}

void multiplica(int linhas, int colunas, int matriz1[][100], int matriz2[][100], int mult[][100]){
	
	int l, j;
	
	for(l=0;l<linhas;l++){
		for(j=0;j<colunas;j++){
			mult[l][j] = matriz1[l][j] * matriz2[j][l];
		}
	}
	
	printf("\n*** Multiplicacao ***\n");
	for(l=0;l<linhas;l++){
		for(j=0;j<colunas;j++){
			printf(" %d ",mult[l][j]);
		}
		printf("\n");
	}
}


int main (void){
	
	srand(time(NULL));
	int lin1, col1,lin2,col2,matriz1[100][100],matriz2[100][100],mult[100][100];
	
	
	printf("\tMATRIZ 01\n");
	printf("Digite o numero de linhas:");
	scanf("%d",&lin1);
	printf("Digite o numero de colunas:");
	scanf("%d",&col1);
	
	printf("\tMATRIZ 02\n");
	printf("Digite o numero de linhas:");
	scanf("%d",&lin2);
	printf("Digite o numero de colunas:");
	scanf("%d",&col2);
	
	if(lin1 == col2 && lin2 == col1){
		printf("\n MATRIZES TRANSPOSTAS \n");
	}else{
		printf("\n!!! AS MATRIZES INFORMADAS NAO TRANSPOSTAS\n");
	}
	
	printf("\n ### Escreva a matriz 01 ###\n ");
	geraMatrizes(lin1,col1,matriz1);
	printf("\n ### Escreva a matriz 02 ###\n ");
	geraMatrizes(lin2,col2,matriz2);
	

	imprime(lin1,col1,matriz1);
	imprime(lin2,col2,matriz2);
	
	if(lin1 == col2 && lin2 == col1){
		multiplica(lin1,lin2,matriz1,matriz2,mult);
	}
	
	return 0;
}
