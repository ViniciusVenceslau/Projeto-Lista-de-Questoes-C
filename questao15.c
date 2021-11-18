#include <stdio.h>
#include <stdlib.h>

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
int q;
float *x;
int (*pf) (const void *, const void *) = compare;
printf("Informe o tamanho do vetor:\n");
scanf("%d", &q);
x = malloc(q * sizeof(float));
printf("Insira os elementos do vetor:\n");
for(int i = 0; i < q; i++){
scanf("%f", &x[i]);
}
qsort(x, q, sizeof(float), *pf);
printf("Os valores organizados em ordem crescente é:\n");
for(int i = 0; i < q; i++){
printf("%f", x[i]);
printf("\n");
}
free(x);
return 0;
}
