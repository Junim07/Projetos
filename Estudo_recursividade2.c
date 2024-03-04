#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int somadigito(char *num){
    int soma, digito;
    
    if(*num=='\0'){
        return 0;
    } else{
        digito = *num - '0';
        soma = digito + somadigito(num+1);
    }
    return soma;
}

int main(){
    int soma;
    char numero[50];
    printf("Digite um numero: ");
    scanf("%s", numero);
    soma = somadigito(numero);

    printf ("%d", soma); 
}