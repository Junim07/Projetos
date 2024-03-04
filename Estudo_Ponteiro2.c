#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palavra[50];
    int index=0;
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);
    for(int i = tamanho-1;i>=0;i--){
        if(palavra[index]==palavra[i]){
            index++;
            if(i==0){
                printf("A palavra e um palindromo");
            }
        } else{
            printf("nao e um palindromo");
            break;
        }
    }
}