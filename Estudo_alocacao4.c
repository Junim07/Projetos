#include <stdio.h>
#include <stdlib.h>

int main(){
    int *numeros, total, soma = 0;
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &total);

    numeros = (int *) malloc(total*sizeof(int));
    printf("Digite os numeros \n");
    for(int i = 0; i<total; i++){
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }
    free(numeros);
    printf("%d", soma);
}