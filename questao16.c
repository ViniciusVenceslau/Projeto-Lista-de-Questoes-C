Primeiro código com implementação do cálculo do tempo de compilação:
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int compare (const void *a, const void *b){
return (*(float*)a - *(float*)b);
}

int comparefloat (const void *a, const void *b){
if(*(float*)a > *(float*)b){
return 1;
} else if (*(float*)a == *(float*)b){
return 0;
} else {
return -1;
}
}

int main() {
clock_t t;
int q;
float *x;
t=clock();
printf("Informe o tamanho do vetor:\n");
scanf("%d", &q);
x = malloc(q * sizeof(float));
printf("Insira os elementos do vetor:\n");
for(int i = 0; i < q; i++){
scanf("%f", &x[i]);
}
qsort(x, q, sizeof(float), compare);
printf("Os valores organizados em ordem crescente é:\n");
for(int i = 0; i < q; i++){
printf("%f", x[i]);
printf("\n");
}
t=clock()-t;
printf("O tempo foi de: %ld clicks = (%f segundos)\n:", t, ((float)t)/CLOCKS_PER_SEC);
free(x);
return 0;
}

Segundo código com implementação do cálculo do tempo de compilação:
