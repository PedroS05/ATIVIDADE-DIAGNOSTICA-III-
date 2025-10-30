#include <stdio.h>

int main() {
int n;
int cont = 0;
int t;

printf("Por gentileza, informe um número inteiro positivo: ");
scanf("%d", &n);


if (n <= 0) {
    printf("Por gentileza, informe um número inteiro POSITIVO.\n");
    return 1; 
}

t = n;


while (t != 0) {
    t = t / 10;
    cont++;
}

printf("O número %d tem %d dígitos.\n", n, cont);

return 0;


}