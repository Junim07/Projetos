#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fatorial(int numero, int *fatorial){
    int valorfatorial = 0;
    int valorinicial = 1;
    for(int i = 1; i<numero;i++){
        if(valorinicial==1){
        valorfatorial = numero *(numero - i);
        valorinicial=0;
    } else{
        valorfatorial = valorfatorial * (numero - i);
    }
    }
    *fatorial = valorfatorial;
}

int main(){
    int numero, numerofatorial;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    fatorial(numero, &numerofatorial);

    printf("O valor do fatorial do numero e: %d", numerofatorial);
}