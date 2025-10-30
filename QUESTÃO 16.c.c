#include <stdio.h>


int main() {
	
	
    int matriz[3][3];
    int i, j;
    int somaL[3] = {0};
	int somaC[3] = {0};
    int somaDiagPrincipal = 0;
	int somaDiagSecundaria = 0;
    int magico = 1; 


   
    printf("Informe os números da matriz 3 por 3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Matriz [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
    }
    }

   
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            somaL[i] += matriz[i][j];
            somaC[j] += matriz[i][j];
            if (i == j)
                somaDiagPrincipal += matriz[i][j];
            if (i + j == 2)
                somaDiagSecundaria += matriz[i][j];
                
    }
    }

    int soma_Referencia = soma_Linha[0];
    

    for (i = 0; i < 3; i++) {
        if (somaL[i] != somaRef)
            magico = 0;
            
    }

  
    for (j = 0; j < 3; j++) {
        if (somaC[j] != somaRef)
            magico = 0;
            
            
    }

 
    if (somaDiagPrincipal != somaRef || somaDiagSecundaria != somaRef)
        magico = 0;

    if (magico)
        printf("A matriz é um quadrado magico.\n");
        
    else
        printf("A matriz não é um quadrado magico.\n");
        
        

    return 0;
}