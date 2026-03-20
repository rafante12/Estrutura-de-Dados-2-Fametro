#include <stdio.h>

int main() {
    int m[4][4], i, j;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            scanf("%d", &m[i][j]);
        }
    }

    printf("Diagonal principal:\n");
    for(i = 0; i < 4; i++){
        printf("%d ", m[i][i]);
    }

    return 0;
}