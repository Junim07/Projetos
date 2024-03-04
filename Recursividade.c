#include <stdio.h>
#include <stdlib.h>

int fatorial(int numero){
    int resultado=0;
    if(numero==0){
        resultado=1;
    } else{
        resultado = numero * fatorial(numero-1);
    }
    return resultado;
}

int main(){
    int numero, resultado;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    resultado = fatorial(numero);

    printf("%d", resultado);
}