#include <stdio.h>
#include <stdlib.h>

int mdc(int num1, int num2){
    int maiornumero, referencial=1, menornumero, i;
        if(num1>num2){
            maiornumero=num1;
            menornumero=num2;
        } else{
            maiornumero=num2;
            menornumero=num1;
        }

    for(i = menornumero ; i>1;i--){
            if(maiornumero % i==0 && menornumero % i==0){
                maiornumero = maiornumero / i;
                menornumero = menornumero / i;
                referencial = referencial * i;
        }
}
    return referencial;
}

int main(){
    int numero1, numero2, Mdc;
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    Mdc = mdc(numero1, numero2);

    printf("%d", Mdc);
}