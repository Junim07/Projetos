#include <stdio.h>
#include <stdlib.h>

int fibonacci(int num){
    if(num<0){
        return 0;
    }
    if(num == 1 || num == 0){
        return num;
    }
    return fibonacci(num-1) + fibonacci(num-2);
}


int main(){
    int numero, numeroformatado;
    printf("Digite ate qual numero da sequencia de fibonacci deseja visualizar: ");
    scanf("%d", &numero);
    numeroformatado = fibonacci(numero);
    printf("%d", numeroformatado);
}