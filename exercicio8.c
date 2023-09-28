#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void limparConsole(){
	system("cls");
}

void constante(int linhas, int colunas, int matriz1[][100], int matriz2[][100]){
	
	int constante, l,j;
	printf("Digite a constante:");
	scanf("%d",&constante);
	
	for (l=0;l<linhas;l++){
		for (j=0;j<colunas;j++){
			matriz1[l][j] += constante;
			matriz2[l][j] += constante;
		}
	}
}


void subtrair(int linhas, int colunas, int matriz1[][100], int matriz2[][100], int matriz3[][100]){
	
	int l,j;
	
	for(l=0;l<linhas;l++){
		for(j=0;j<colunas;j++){
			matriz3[l][j] -= matriz1[l][j];
		}
	}
	
	for(l=0;l<linhas;l++){
		for(j=0;j<colunas;j++){
			matriz3[l][j] -= matriz2[l][j];
		}
	}
}


void somar(int linhas, int colunas, int matriz1[][100], int matriz2[][100], int matriz3[][100]){
	
	int l,j;
	
	for(l=0;l<linhas;l++){
		for(j=0;j<colunas;j++){
			matriz3[l][j] += matriz1[l][j];
		}
	}
	for(l=0;l<linhas;l++){
		for(j=0;j<colunas;j++){
			matriz3[l][j] += matriz2[l][j];
		}
	}
}

// GERA MATRIZ
void geraMatriz(int linhas, int colunas, int matriz[][100]){
	
	int l,j;
	for(l = 0; l< linhas; l++){
		for(j = 0; j< colunas; j++){
			matriz[l][j] = rand() % 9;
		}
	}
}

// IMPRIME MATRIZ
void imprimeMatriz(int linhas, int colunas, int matriz[][100]){
	
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


int main(void){
	
	srand(time(NULL));
	int linhas, colunas, op, somaTotal, repete = 1, sub;
	char caractere;
	
	int matriz1[100][100], matriz2[100][100], matriz3[100][100];
	
	printf(" Criar Matriz 01 e 02:\n");
	printf("Digite o numero de linhas:");
	scanf("%d",&linhas);
	printf("Digite o numero de colunas:");
	scanf("%d",&colunas);
	
	limparConsole();
	
	geraMatriz(linhas,colunas,matriz1);
	geraMatriz(linhas,colunas,matriz2);
	
	//somaTotal = somar(linhas,colunas,matriz1,matriz2);
	//sub = subtrair(linhas,colunas,matriz1,matriz2);
	
	while(repete == 1){
	
	printf("\n ### Menu de opcoes ### \n\n");
	
	printf("(a) somar as duas matrizes criadas\n");
	printf("(b) subtrair a primeira matriz da segunda\n");
	printf("(c) adicionar uma constante as duas matrizes\n");
	printf("(d) imprimir as matrizes criadas\n");
	printf("(e) sair do programa\n");
	
	printf("\nDigite: ");
	scanf(" %c",&caractere);
	
	if (caractere == 'a'){
		op = 1;
	}else if (caractere == 'b')	{
		op = 2;
	}else if (caractere == 'c') {
		op = 3;
	}else if (caractere == 'd') {
		op = 4;
	}else if (caractere == 'e') {
		op = 5;
	}
	
	if(op == 1){
		printf("A soma das duas matrizes criadas:");
		somar(linhas,colunas,matriz1,matriz2,matriz3);
		imprimeMatriz(linhas,colunas,matriz3);
	}else if(op == 2){
		printf("A subtracao das matrizes criadas:");
		subtrair(linhas,colunas,matriz1,matriz2,matriz3);
		imprimeMatriz(linhas,colunas,matriz3);
	}else if(op == 3){
		constante(linhas,colunas,matriz1,matriz2);
	}else if(op == 4){
		printf("\n      Matriz 01 ");
		imprimeMatriz(linhas,colunas,matriz1);
		printf("\n      Matriz 02 ");
		imprimeMatriz(linhas,colunas,matriz2);
		printf("\n      Matriz 03 Soma/Subt");
		imprimeMatriz(linhas,colunas,matriz3);
	}else if(op == 5){
		repete = 0;
		exit(0);
	}
	
	getchar();getchar();
	
	limparConsole();
	}
	
	return 0;
}
