#include <stdio.h>

int main() {
int matriz[4][4];
int i, j;
int maior;


printf("Por gentileza, informe os números da matriz 4x4:\n");
for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
        printf("Número [%d][%d]: ", i, j);
        scanf("%d", &matriz[i][j]);
    }
}


printf("a matriz informada foi a seguinte:\n");
for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
        printf("%4d ", matriz[i][j]);
    }
    printf("\n");
}


printf("O maior valor encontrado em cada linha é de :\n");
for (i = 0; i < 4; i++) {
    maior = matriz[i][0]; 
    for (j = 1; j < 4; j++) {
        if (matriz[i][j] > maior)
            maior = matriz[i][j];
    }
    printf("Linha %d: %d\n", i, maior);
}

return 0;


}