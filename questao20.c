#include <stdio.h>
#include "gc.h"
#include <stdlib.h>
#include <time.h>
int compare(const void * a, const void * b){
  if ( *(float*)a >  (float*)b ) return 1;
  if ( *(float*)a == (float*)b ) return 0;
  if ( (float*)a <  (float*)b ) return -1;
int main(){
  float iT1, fT1, iT2, fT2, *x, *y;
  printf("Informe o tamanho do vetor:\n");
  scanf("%d", &q);
  iT1 = clock();
  x = GC_MALLOC(q * sizeof(float));
  initT2 = clock();
  y = malloc(q * sizeof(float));
  printf("Insira os elementos do vetor:\n");
  for(int i = 0; i < q; i++){
    scanf("%f", &x[i]);
    y[i] = x[i];
  }
  printf("Valores digitados: \n");
  for(int i = 0; i < q; i++){
    printf("%.1f ", x[i]);
  }
  qsort(x, q, sizeof(float), compare); 
  printf("Elementos ordenados em ordem crescente: \n");
  for(i = 0; i < q; i++){
    printf("%.1f ", x[i]);
  }
  free(y);
  finalT1 = clock();
  finalT2 = clock();
  printf("\nTempo de execucao1 = %.10f segundos", (fT1 - iT1)/CLOCKS_PER_SEC);
  printf("\nTempo de execucao2 = %.10f segundos", (fT2 - iT2)/CLOCKS_PER_SEC);
  printf("\nAtraso do coletor de lixo = %.10f segundos\n", ((fT1 - iT1)/CLOCKS_PER_SEC)-((fT2 - iT2)/CLOCKS_PER_SEC));
  return 0;
}
