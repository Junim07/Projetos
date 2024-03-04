#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void palindromo(char palavra[], char *palindromo){
    int index = 0;
    int tamanho = strlen(palavra);
    for(int i=tamanho-1; i>=0;i--){
        palindromo[index]=palavra[i];
        index++;
    }
    palindromo[index] = '\0';
}

int main(){
    char palavra[50], palavrapalindromo[50];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    palindromo(palavra, palavrapalindromo);

    int comparador = strcmp(palavra, palavrapalindromo);

    if(comparador==0){
        printf("A palavra e um palindromo");
    } else{
        printf("A palavra nao e um palindromo");
    }
}