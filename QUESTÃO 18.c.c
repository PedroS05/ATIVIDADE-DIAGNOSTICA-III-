#include <stdio.h>
#include <string.h>


int main(){
	
	char palavra1[50], palavra2[50];
	
	printf("Informe a primeira palavra:");
	scanf("%s", palavra1);
	
	printf("Informe a segunda palavra:");
	scanf("%s", palavra2);
	
	if(strcmp(palavra1, palavra2) == 0){
		printf("As palavras são iguais.");
		
	}
	
	else {
		printf("As palavras não são iguais.");
		
		
	}
	
	return 0;
}