#include <stdio.h>

int main() {
    int m[4][4], i, j;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            scanf("%d", &m[i][j]);
        }
    }

    printf("Triangulo superior:\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(i < j){
                printf("%d ", m[i][j]);
            }
        }
    }

    return 0;
}