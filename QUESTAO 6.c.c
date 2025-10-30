#include <stdio.h>

int main() {
int n[10];
int i, j;
int repetido;


printf("Informe 10 números inteiros:\n");
for (i = 0; i < 10; i++) {
    printf("%dº número: ", i + 1);
    scanf("%d", &n[i]);
}

printf("\nNúmeros que não se repetem:\n");


for (i = 0; i < 10; i++) {
    repetido = 0; 

    for (j = 0; j < 10; j++) {
        if (i != j && n[i] == n[j]) {
            repetido = 1; 
            break;
        }
    }

    if (!repetido)
        printf("%d ", n[i]);
    }
    
printf("\n");

return 0;

}