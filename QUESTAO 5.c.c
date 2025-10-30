#include <stdio.h>

int main() {
    
int n, invertido = 0, rest;

printf("Informe um número inteiro: ");
scanf("%d", &n);


int original = n;


while (n != 0) {
    rest = n % 10;            
    invertido = invertido * 10 + rest;
    n = n / 10;           
}

printf("Número original: %d\n", original);
printf("Número invertido: %d\n", invertido);

return 0;


}