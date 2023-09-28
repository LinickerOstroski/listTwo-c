#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void Soma(int linhas1, int colunas1, int linhas2, int colunas2, int matriz1[][100], int matriz2[][100]){
		
	int i,l,j, soma1 = 0, soma2 = 0, somaTotal = 0, sair = 0,calcular = 0;
	
	printf("\n");
	for(l=0;l<linhas1;l++){
		for(j=0;j<colunas1;j++){
			if(linhas1 == linhas2 && colunas1 == colunas2){
				printf("As duas matrizes sao de mesma ordem\n\n");
				sair = 1;
				calcular = 1;
				break;
			}else{
				printf("As matrizes nao sao de mesma ordem\n\n");
				sair = 1;
				break;
			}
		}
		if(sair = 1){
			break;
		}
	}
	
	if(calcular == 1){
		for (l=0;l<linhas1;l++){
			for (j=0;j<colunas1;j++){
			
				soma1 += matriz1[l][j];
				soma2 += matriz2[l][j];
				somaTotal = soma1 + soma2;
			}
		}
	}
	
	if(calcular == 1){
		printf("Calculo da soma das duas matrizes: [%d]\n",somaTotal);
	}
}

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

int main(void){
	
	srand(time(NULL));
	
	int mat1[100][100], mat2[100][100];
	int l1,j1,l2,j2;
	
	printf("      **Matriz 01**\n");
	printf("Digite o numero de linhas:");
	scanf("%d",&l1);
	printf("Digite o numero de colunas:");
	scanf("%d",&j1);
	
	printf("      **Matriz 02**\n");
	printf("Digite o numero de linhas:");
	scanf("%d",&l2);
	printf("Digite o numero de colunas:");
	scanf("%d",&j2);
	
	printf("\n      **Matriz 01**\n");
	Matriz(l1,j1,mat1);
	printf("\n      **Matriz 02**\n");
	Matriz(l2,j2,mat2);
	Soma(l1,j1,l2,j2,mat1,mat2);
	
	
	
	return 0;
}

