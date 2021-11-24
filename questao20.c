#include <stdio.h>
#include "gc.h"
#include <stdlib.h>
#include <time.h>
int comparar(const void * a, const void * b){
  if ( (float*)a >  (float*)b ) return 1;
  if ( (float*)a == (float*)b ) return 0;
  if ( (float*)a <  (float*)b ) return -1;
int main(){
  float initT1, finalT1, initT2, finalT2, *x, *y;
  printf("Informe o tamanho do vetor:\n");
  scanf("%d", &q);
  initT1 = clock();
  x = GC_MALLOC(q * sizeof(float));
  initT2 = clock();
  y = malloc(n * sizeof(float));
  for(int i = 0; i < q; i++){
    printf("Numero %d: ", i);
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
  printf("\nTempo de execucao1 = %.10f segundos", (finalT1 - initT1)/CLOCKS_PER_SEC);
  printf("\nTempo de execucao2 = %.10f segundos", (finalT2 - initT2)/CLOCKS_PER_SEC);
  printf("\nAtraso do coletor de lixo = %.10f segundos\n", ((finalT1 - initT1)/CLOCKS_PER_SEC)-((finalT2 - initT2)/CLOCKS_PER_SEC));
  return 0;
}
