#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void geraMatriz(int linhas, int colunas, int matriz[][100]){
	
	int l,j,a;
	
	for(l=0;l<linhas;l++){
		for(j=0;j<colunas;j++){
			a = rand() % 3;
			matriz[l][j] = a;
		}
	}
}

void imprimeMatriz(int linhas, int colunas, int matriz[][100]){
	
	int l,j;
	
	for(l=0;l<linhas;l++){
		for(j=0;j<colunas;j++){
			printf(" %d ",matriz[l][j]);
		}
		printf("\n");
	}
}

int main(void){
	
	srand(time(NULL));
	int linhas = 4, colunas = 7, mapa[100][100],n=0,l,j;
	
	geraMatriz(linhas,colunas,mapa);
	imprimeMatriz(linhas,colunas,mapa);
	
	scanf("%d",&n);
		
    for (j = 0; j < n; j++) {
    	l++;
        printf("%d %d\n", l, j);
            if (mapa[l][j] == 2) {
                printf(" 1\n");  
    		}else{
    			printf("0\n");
		}
    }
  
	
	return 0;
}
