#include <stdio.h>

int main(){
    
    int n1, n2, Partida, Chegada, ponto;
    
    printf("Por gentileza, informe dois números inteiros: \n");
    scanf("%d%d", &n1, &n2);
    
    if(n1 < n2){
        Partida = n1;
        Chegada = n2;
    }
    else{
        Partida = n2;
        Chegada = n1;
    }
    printf("Os números inteiros entre %d e %d: \n", Partida, Chegada);
    
    for(ponto = Partida + 1; ponto < Chegada; ponto++){
        printf("%d \n", ponto);
    }

    return 0;
}