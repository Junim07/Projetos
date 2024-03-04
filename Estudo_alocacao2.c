#include <stdio.h>
#include <stdlib.h>

int main(){
    int *numeros, total;
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &total);

    numeros = (int *) malloc(total * sizeof(int));

    printf("Digite os numeros:");
    for(int i=0;i<total;i++){
        scanf("%d", &numeros[i]);
    }
    printf("Os numeros digitados foram: ");
    for(int i=0;i<total;i++){
        printf("%d", numeros[i]);
    }
    free(numeros);
}