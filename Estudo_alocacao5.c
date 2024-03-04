#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverterstring(char palavra[],int tamanho, char *palavraformatada){
    int index = 0;
    for(int i = tamanho -1; i>=0 ; i--){
        palavraformatada[index] = palavra[i];
        index++;
    }
}

int main(){
    char *palavra, palavrainicial[50];
    int tamanho = 0;

    printf("Digite a palavra: ");
    scanf("%s", palavrainicial);
    tamanho = strlen(palavrainicial);

    palavra = (char *) malloc((tamanho+1)*sizeof(char));
    inverterstring(palavrainicial,tamanho, palavra);
    printf("%s", palavra);
}