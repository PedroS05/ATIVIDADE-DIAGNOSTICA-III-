#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
char palavra[50];
int i, v = 0, con = 0;

printf("Informe uma palavra: ");
scanf("%s", palavra);  


for (i = 0; i < strlen(palavra); i++) {
    char c = tolower(palavra[i]); 
    if (isalpha(c)) { 
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            v++;
        else
            con++;
    }
}

printf("A palavra escolhida '%s' tem %d vogais e %d consoantes.\n", palavra, v, con);

return 0;


}