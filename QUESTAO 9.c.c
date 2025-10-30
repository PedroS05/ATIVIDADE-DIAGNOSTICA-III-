#include <stdio.h>

int main() {
    int n[8];
    int l, c, temp;


    printf("Digite 8 números inteiros:\n");
    for (l = 0; l < 8; l++) {
        printf("%dº número: ", l + 1);
        scanf("%d", &n[l]);
    }


    for (l= 0; l< 8 - 1; l++) {
        for (c = l + 1; c < 8; c++) {
           if (n[l] < n[c]) {
                temp = n[l];
                n[l] = n[c];
                n[c] = temp;
            }
        }
    }


    printf("Numeros em ordem decrescente:\n[ ");
    for (l = 0; l < 8; l++) {
    printf("%d ", n[l]);
    }
    printf("]\n");

    return 0;


}