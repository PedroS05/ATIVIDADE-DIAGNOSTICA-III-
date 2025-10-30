#include <stdio.h>

int main() {
int A[5], B[5];
int i;
int prod = 0;


printf("Digite os 5 elementos do primeiro vetor:\n");
for (i = 0; i < 5; i++) {
    printf("A[%d]: ", i);
    scanf("%d", &A[i]);
}


printf("Digite os 5 elementos do segundo vetor:\n");
for (i = 0; i < 5; i++) {
    printf("B[%d]: ", i);
    scanf("%d", &B[i]);
}


for (i = 0; i < 5; i++) {
    prod += A[i] * B[i];
}

printf("Produto escalar dos vetores é: %d \n", prod);

return 0;


}