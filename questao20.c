#include <stdio.h>
#include "gc.h"
#include <stdlib.h>
#include <time.h>
int compare(const void * a, const void * b){
  if ( *(float*)a > *(float*)b ){
    return 1;}
  else if ( *(float*)a == *(float*)b ){
    return 0;}
  else {
    return -1;}
}
int main(){
  int q;
  float iT1, fT1, iT2, fT2, *x, *y;
  printf("Informe o tamanho do vetor:\n");
  scanf("%d", &q);
  iT1 = clock();
  x = GC_MALLOC(q * sizeof(float));
  iT2 = clock();
  y = malloc(q * sizeof(float));
  printf("Insira os elementos do vetor:\n");
  for(int i = 0; i < q; i++){
    scanf("%f", &x[i]);
    y[i] = x[i];
  }
  printf("Valores digitados:\n");
  for(int i = 0; i < q; i++){
    printf("%f ", x[i]);
  }
  printf("\n");
  qsort(x, q, sizeof(float), compare); 
  printf("Elementos ordenados em ordem crescente:\n");
  for(int i = 0; i < q; i++){
    printf("%f ", x[i]);
  }
  free(y);
  fT1 = clock();
  fT2 = clock();
  printf("Primeiro tempo de execucao = %f segundos\n", (fT1 - iT1)/CLOCKS_PER_SEC);
  printf("Segundo tempo de execucao2 = %f segundos\n", (fT2 - iT2)/CLOCKS_PER_SEC);
  printf("Atraso do coletor de lixo = %f segundos\n", ((fT1 - iT1)/CLOCKS_PER_SEC)-((fT2 - iT2)/CLOCKS_PER_SEC));
  return 0;
}
