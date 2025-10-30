#include <stdio.h>

int main() {
int n[10];
int i, j;
int cont[10] = {0};
int contabilizado;


printf("Digite os 10 números inteiros entre 0 e 20:\n");
for (i = 0; i < 10; i++) {
    do {
        printf("%dº número: ", i + 1);
        scanf("%d", &n[i]);
        if (n[i] < 0 || n[i] > 20)
            printf("Número inválido! Digite novamente.\n");
    } while (n[i] < 0 || n[i] > 20);
}


printf("\nFrequência dos números digitados:\n");
for (i = 0; i < 10; i++) {
    contabilizado = 0;
    
    for (j = 0; j < i; j++) {
        if (n[i] == n[j]) {
            contabilizado = 1;
            break;
        }
    }
    if (!contabilizado) {
        int f = 0;
        for (j = 0; j < 10; j++) {
            if (n[i] == n[j])
                f++;
        }
        printf("Número %d apareceu %d vez(es)\n", n[i], f);
    }
}

return 0;


}