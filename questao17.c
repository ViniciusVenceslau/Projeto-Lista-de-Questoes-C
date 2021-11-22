#include <stdio.h>
#include <stdlib.h>

void soma (int *a, int *b, int *c, int q){
  
  //Realização da soma vetorial:
  for(int k=0; k<q; k++){
    c[k] = a[k] + b[k];
  }
printf("o vetor soma é:\n");
  for(int i=0; i<q; i++){
    printf("%d", c[i]);
    printf("\n");
}

}
int main(void) {
  int q1, q2;
  int *x;
  int *y;
  int *z;
x = malloc(q1 * sizeof(int));
y = malloc(q2 * sizeof(int));
z = malloc(q2 * sizeof(int));
  printf("Informe o tamanho do vetor 1:\n");
  scanf("%d", &q1);
  printf("Informe o tamanho do vetor 2:\n");
  scanf("%d", &q2);

  while (q1 != q2){
  printf("Não é possível somar os vetores devido à diferença entre os tamanhos!\n");
  printf("Insira o tamanho do segundo vetor novamente.\n");
  scanf("%d", &q2);
  }
  printf("Digite os elementos do vetor 1:\n");
  for(int i=0; i<q1; i++){
    scanf("%d", &x[i]);
  }
  printf("Insira os elementos do vetor 2:\n");
  for(int j=0; j<q2; j++){
    scanf("%d", &y[j]);
  }
  
//Chamada da Função:
soma(x, y, z, q2);
free(x);
free(y);
free(z);
return 0;
}
