#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int maiornumero(int *num1, char num2){
    num2 = num2 - '0';
    if(*num1>num2){
        return 1;
    } else{
        *num1 = num2;
        return 1;
    }
}

int main(){
    char numeros[50];
    int maiordigito=0;

    printf("Digite um numero: ");
    scanf("%s", numeros);
    
    for(int i=0;i<strlen(numeros);i++){
        maiornumero(&maiordigito, numeros[i]);
    }
    printf("O maior digito foi: %d", maiordigito); 
}