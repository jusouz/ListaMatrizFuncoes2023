#include <stdio.h>

int main() {
    int N, M;

    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &N);

    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &M);

    if (N != M) {
        printf("A matriz deve ser quadrada (mesmo numero de linhas e colunas).\n");
        return 1;
    }

    int matriz[N][M];
    int i,j;

    printf("Digite os elementos da matriz:\n");
    for ( i = 0; i < N; i++) {
        for ( j = 0; j < M; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Diagonal Secundaria da Matriz:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", matriz[i][N - i - 1]);
    }

    printf("\n");

    return 0;
}





