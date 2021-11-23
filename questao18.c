#include <stdio.h>
#include <stdlib.h>

void produto(float **a, float **b, float **c, int lA, int cA, int cB){
    //Produto AB
    int z = 0;
    for(int i = 0; i < lA; i++){
        for(int j = 0; j < cB; j++){
            for(int k = 0; k < cA; k++){
                z = z + a[i][k]*b[k][j];
            }
        c[i][j] = z;
        z = 0;
        }
    }
}


int main() {
    int la, ca, cb;
    float **A, **B, **C;
    printf("Informe o número de linhas de A: ");
    scanf("%d", &la);
    printf("Insira o número de colunas de A: ");
    scanf("%d", &ca);
    printf("A matriz B terá %d linhas para poder ser feito o produto AB.\n", ca);
    printf("Digite o número de colunas de B: ");
    scanf("%d", &cb);

    A = malloc(la*sizeof(float*));
    A[0] = malloc(ca*la*sizeof(float));
    for(int i = 1; i < la; i++){
        A[i] = A[i-1] + ca;
    }
    printf("\n");
    for(int i = 0; i < la; i++){
        for(int j = 0; j <ca; j++){
        printf("Digite o elemento da linha %d e da coluna %d da Matriz A:\n", i+1, j+1);
        scanf("%f", &A[i][j]);
        }
        printf("\n");
    }
    B = malloc(ca*sizeof(float*));
    B[0] = malloc(cb*ca*sizeof(float));
    for(int i = 1; i < ca; i++){
        B[i] = B[i-1] + cb;
    }
    for(int i = 0; i < ca; i++){
        for(int j = 0; j < cb; j++){
        printf("Insira o valor da linha %d e da coluna %d da Matriz B:\n", i+1, j+1);
        scanf("%f", &B[i][j]);
        }
        printf("\n");
    }
    C = malloc(la*sizeof(float*));
    C[0] = malloc(cb*la*sizeof(float));
    for(int i = 1; i < la; i++){
        C[i] = C[i-1] + cb;
    }
    produto(A, B, C, la, ca, cb);
    printf("A matriz A possui esta estrutura:\n");
    for (int i = 0; i < la; i++){
        for (int j = 0; j < ca; j++){
            printf("%.f ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("A matriz B possui esses elementos:\n");
    for (int i = 0; i < ca; i++){
        for (int j = 0; j < cb; j++){
            printf("%.f ", B[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("A matriz C ou AB é: \n");
    for (int i = 0; i < la; i++){
        for (int j = 0; j < cb; j++){
            printf("%.f ", C[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    free(C[0]);
    free(C);
    free(B[0]);
    free(B);
    free(A[0]);
    free(A);
    return 0;
}
