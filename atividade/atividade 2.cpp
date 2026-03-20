#include <stdio.h>

int main() {
    float matriz[3][4];
    int i, j;
    float soma;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("\nMatriz:\n");
    for(i = 0; i < 3; i++){
        soma = 0;
        for(j = 0; j < 4; j++){
            printf("%.1f ", matriz[i][j]);
            soma += matriz[i][j];
        }
        printf("\nSoma da linha %d: %.1f\n", i, soma);
    }

    return 0;
}