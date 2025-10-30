#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int v[50];
int unicos[50];
int i, j, k = 0;
int repetido;


srand(time(NULL));


for (i = 0; i < 50; i++) {
    v[i] = rand() % 11; 
}


printf("O vetor original é:\n[");
for (i = 0; i < 50; i++) {
    printf("%d ", v[i]);
}
printf("]\n");


for (i = 0; i < 50; i++) {
    repetido = 0;
    for (j = 0; j < k; j++) {
        if (v[i] == unicos[j]) {
            repetido = 1;
            break;
        }
    }
    if (!repetido) {
        unicos[k] = v[i];
        k++;
    }
}


printf("\nO vetor sem números repetidos é:\n[");
for (i = 0; i < k; i++) {
    printf("%d ", unicos[i]);
}
printf("]\n");

return 0;


}