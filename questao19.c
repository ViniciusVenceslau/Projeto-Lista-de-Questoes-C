#include <stdio.h>
#include "gc.h" // Importa a biblioteca libgc
#include <stdlib.h>

int compare (const void * a, const void * b){
  if ( *(float*)a >  *(float*)b ) {
    return 1; } // Se o primeiro numero for maior que o segundo, retorna 1
  else if ( *(float*)a == *(float*)b ) {
    return 0;} // Se o primeiro numero for igual o segundo, retorna 0
  else {
    return -1;} // Se o primeiro numero for menor que o segundo, retorna -1
}
int main(){
  int q; // Corresponde ao tamanho do vetor
  float *x; // Declaracao do ponteiro para vetor
  printf("Informe o tamanho do vetor:\n");
  scanf("%d", &q); // Quantidade de elementos do vetor
  x = GC_MALLOC(q * sizeof(float)); // Realiza a alocacao dinamica atraves da biblioteca libgc solicitada na questao
  printf("Digite os elementos do vetor:\n");
  for(int i = 0; i < q; i++){ // Usuario informando os valores que serao organizados
    scanf("%f", &x[i]);
  }
  printf("Valores digitados:\n");
  for(int i = 0; i < q; i++){ // Impressao dos numeros digitados pelo usuario
    printf("%.1f ", x[i]);
  }
  printf("\n");
  qsort(x, q, sizeof(float), compare); 
  printf("Elementos ordenados em ordem crescente:\n");
  for(int i = 0; i < q; i++){ // Impressao dos numeros alocados dinamicamente na ordem crescente
    printf("%.1f ", x[i]);
  }
  return 0;
} 
