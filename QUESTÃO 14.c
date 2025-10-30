#include <stdio.h>

int main() {
int matriz[4][4];
int i, j;
int somaDiag = 0;


printf("Informe os elementos da matriz 4 por 4:\n");
for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
        printf("Elemento [%d][%d]: ", i, j);
        scanf("%d", &matriz[i][j]);
    }
}


for (i = 0; i < 4; i++) {
    somaDiag += matriz[i][i];
}

printf("A matriz informada foi:\n");
for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
        printf("%4d ", matriz[i][j]);
    }
    printf("\n");
}

printf("\nA soma do polígono principal foi de : %d\n", somaDiag);

return 0;


}