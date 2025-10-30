#include <stdio.h>


int main(){
	
	
	char palavra[50];
	int i = 0, j, palindromo = 1;
	
	
	printf("Informe uma palavra:");
		scanf("%s", palavra);
		
		
		while(palavra[i] != '\0'){
			i++;
			
		}
		
		
		j = i - 1;
		i = 0;
		
		
		while(i < j){
			if (palavra[i] != palavra[j]){
				palindromo = 0;
				break;
			}
			
			i++;
			j--;
			
		}
	
	if(palindromo){
	
	printf("A palavra é um palíndromo.");
	
	}
	else{
	printf("A palavra não é um palíndromo.");
	}
	return 0;
}