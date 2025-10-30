#include <stdio.h>


int main(){
	
	
	int n;
	
	printf("Por gentileza, informe um número: ");
	scanf("%f", &n);
	
	if (n > 0){
		printf("O número informado é positivo.\n");
		
	}
	
	else if(n < 0){
		printf("O número informado é negativo.\n");
		
	}
	
	else{
		printf("O número informado é zero.\n");
		
	
	}
	
	return 0;
}