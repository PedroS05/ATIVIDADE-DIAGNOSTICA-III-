#include <stdio.h>

int main() {
int n[10];
int i;
int maior, menor;
int posicaoMaior = 0, posicaoMenor = 0;

printf("Por gentileza, informe 10 números inteiros:\n");
for (i = 0; i < 10; i++) {
    printf("%dº número: ", i + 1);
    scanf("%d", &n[i]);
}

maior = menor = n[0];


for (i = 1; i < 10; i++) {
    if (n[i] > maior) {
        maior = n[i];
        posicaoMaior = i;
    }
    if (n[i] < menor) {
        menor = n[i];
        posicaoMenor = i;
    }
}


printf("\nArray de taiss números: [ ");
for (i = 0; i < 10; i++) {
    printf("%d ", n[i]);
}
printf("]\n");

printf("Maior valor: %d (posicao %d)\n", maior, posicaoMaior);
printf("Menor valor: %d (posicao %d)\n", menor, posicaoMenor);

return 0;


}