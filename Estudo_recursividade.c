#include <stdio.h>
#include <stdlib.h>

int soma(int num){
    int somatorio;

    if(num==0){
    return 0;
    } else{ 
    somatorio = num + soma(num-1);
}
    return somatorio;
}

int main(){
    int numero, Soma;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    Soma = soma(numero);

    printf("%d", Soma);
}