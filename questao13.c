#include <stdio.h>
#include <stdlib.h>
int main() {
float *x;
int q;
int auxiliar;
printf("Informe a quantidade de valores a serem organizados:\n");
scanf("%d", &q);
x = malloc(q * sizeof(float));
printf("Digite os valores:\n");
for(int i = 0; i < q; i++){
scanf("%f", &x[i]);
}
for(int i = 0; i < q; i++){
  for(int j = 0; j < q; j++){
    if(x[i] < x[j]){
    auxiliar = x[i];
    x[i] = x[j];
    x[j] = auxiliar;
    }
  }
}
printf("\n");
printf("Os valores em ordem crescente é:\n");
for(int i = 0; i < q; i++){
  printf("%f\n", x[i]);
}
free(x);
return 0;
}
