#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void trocarstrings(char *palavra3, char *palavra4){
       char temp[50];

       strcpy(temp,palavra4);
       strcpy(palavra4, palavra3);
       strcpy(palavra3, temp);
}

int main(){
    char palavra[50], palavra2[50];
    printf("Digite a primeira palavra: ");
    scanf("%s", palavra);
    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);

    trocarstrings(palavra, palavra2);

    printf("As palavras invertidas sao: %s, %s", palavra, palavra2);
}
