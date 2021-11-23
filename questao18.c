#include <stdio.h>
#include <math.h>

void produto (int l, int c, int q, int matriz1[l][c], int matriz2[c][q], int matriz3[l][q]){

//Produto AB
for(int i = 0; i < l; i++){
	for(int j = 0; j < q; j++){
    matriz3[i][j] = 0;
		for(int k = 0; k < c; k++){
			matriz3[i][j] = matriz3[i][j] + matriz1[i][k]*matriz2[k][j];
		}
	}
}
printf("O produto entre as matrizes (AB) é:\n");
for(int i = 0; i < l; i++){
	for(int j = 0; j < q; j++){
		printf("%d ", matriz3[i][j]);
  }
  printf("\n");
}
}

int main() {
int l, c, q;
printf("Informe o número de linhas da matriz A:\n");
scanf("%d", &l);
printf("Insira o número de colunas da matriz A:\n");
scanf("%d", &c);
printf("A matriz B terá %d linhas para poder ser feito o produto AB.\n", c);
printf("Digite o número de colunas da matriz B:\n");
scanf("%d", &q);

int matrizA[l][c];
int matrizB[c][q];
int matrizC[l][q];

printf("Informe os elementos da primeira matriz:\n");
for(int i=0; i<3; i++){
	for(int j=0; j<3; j++){
		scanf("%d", &matrizA[i][j]);
	}
}
printf("Informe os elementos da segunda matriz:\n");
for(int i=0; i<3; i++){
	for(int j=0; j<3; j++){
		scanf("%d", &matrizB[i][j]);
	}
}
produto(l, c, q, matrizA, matrizB, matrizC);
return 0;
}
