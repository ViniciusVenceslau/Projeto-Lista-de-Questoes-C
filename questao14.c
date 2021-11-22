Linhas 1 e 2 foram utilizadas para declaração das bibliotecas do programa em C.
Linha 4 criação de uma função denominada "compare", cujo objetivo é comparar os elementos do vetor "x", determinando o valor da subtração desses números.
Linha 7 desenvolvimento de outra função chamada "comparefloat", a qual retorna valores de acordo com a comparação entre os elementos. Neste contexto, se o primeiro elemento do vetor for maior que o elemento seguinte, a função retornará o valor 1.
Linha 17 função principal do código, região onde é feita a declaração das variáveis, chamamento das funções etc...
Linha 18 corresponde à variável associada ao tamanho do vetor.
Linha 19 criação da variável ponteiro do tipo "float".
Linhas 20 e 21 expõem na tela do usuário a solicitação para que seja indicado o tamanho do vetor/variável "q".
Linha 22 criação de um vetor através da função "malloc()".
Linhas 23 a 26 pedem para o usuário digitar os elementos presentes no vetor.
Linha 27 é utilizado a função "qsort()" para ordenar de forma crescente os elementos do vetor.
Linhas 28 a 31 é exibido na tela do usuário os valores de maneira crescente.
Linha 33 ocorre a liberação do espaço de memória utilizado para compor o vetor por meio da função "free()".
Código da questão 14 a seguir:
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
free(x);
return 0;
}
