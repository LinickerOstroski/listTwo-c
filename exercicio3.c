#include<stdlib.h>
#include<stdio.h>
#include<time.h>

void geraMatriz(int linhas,int colunas,int matriz[100][100]){
	
	srand(time(NULL));
	int l,j,aleatorio;
	
	for(l=0;l<linhas;++l){
		for(j=0;j<colunas;++j){
			aleatorio = rand() % 10;
			matriz[l][j] = aleatorio;
		}
	}	
}

void printMatriz(int linhas, int colunas, int matriz[100][100]){
	
	int l,j;
	
	printf("\n");
	for(l=0;l<linhas;l++){
		printf("\t");
		for(j=0;j<colunas;j++){
			printf(" %d ",matriz[l][j]);
		}
		printf("\n");
	}
}

int confereMatriz(int linhas, int colunas, int matriz[][100], int numero){
	
	int num = 0,l,j;
	
	for(l=0;l<linhas;l++){
		for(j=0;j<colunas;j++){
			if(matriz[l][j] == numero){
				num++;
			}
		}
	}
	
	printf("\nO numero [%d] repetiu [%d] vezes na Matriz.",numero,num);
	return num;
}

int main(void){
	
	int lin, col, numero;
	
	printf("Digite o numero de linhas da Matriz: ");
	scanf("%d",&lin);
	
	printf("Digite o numero de colunas da Matriz: ");
	scanf("%d",&col);
	
	printf("Digite um valor de 0 a 9:");
	scanf("%d",&numero);
	
	int mat[100][100];
	
	geraMatriz(lin,col,mat);
	printMatriz(lin,col,mat);
	confereMatriz(lin,col,mat,numero);
	
	
	return 0;
}
