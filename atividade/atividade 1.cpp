#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j, soma = 0;

    // Leitura
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite um valor: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    // Exibir matriz
    printf("\nMatriz:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);

            if(matriz[i][j] % 2 != 0){
                soma += matriz[i][j];
            }
        }
        printf("\n");
    }

    printf("\nSoma dos impares: %d\n", soma);

    return 0;
}