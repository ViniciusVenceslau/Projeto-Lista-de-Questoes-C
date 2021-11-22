#include <stdio.h>
#include <stdlib.h>

int comparefloat (const void *a, const void *b){
if(*(float*)a > *(float*)b){
return 1;
} else if (*(float*)a == *(float*)b){
return 0;
} else {
return -1;
}
}
void ordenacao(float *x, int q, int (*comparefloat)(const void *a, const void *b)){
int auxiliar;
for(int i = 0; i < q; i++){
  for(int j = 0; j < q; j++){
    if(comparefloat(x+i, x+j) < 0){
      auxiliar = x[i];
      x[i] = x[j];
      x[j] = auxiliar;
    }
  }
}
}

int main() {
int q;
float *x;
int (*pf) (const void *, const void *) = comparefloat;
printf("Informe o tamanho do vetor:\n");
scanf("%d", &q);
x = malloc(q * sizeof(float));
printf("Insira os elementos do vetor:\n");
for(int i = 0; i < q; i++){
scanf("%f", &x[i]);
}
ordenacao(x, q, *pf);
printf("Os valores organizados em ordem crescente é:\n");
for(int i = 0; i < q; i++){
printf("%f", x[i]);
printf("\n");
}
free(x);
return 0;
}
