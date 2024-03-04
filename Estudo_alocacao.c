#include <stdio.h>
#include <stdlib.h>

void media(int *valores, int *media){
    int soma=0;
    for(int i=0; i<*media; i++){
        soma += valores[i];
    }
    *media = soma / *media;
}

int main(){
    int *valores, total = 0;
    printf("Digite a quantidade de numeros que deseja fazer a media: ");
    scanf("%d", &total);
    valores = (int *) malloc(total * sizeof(int));
    printf("Digite os numeros que deseja fazer a media: ");
    for(int i=0;i<total;i++){
        scanf("%d", &valores[i]);
    }
    media(valores, &total);
    free(valores);

    printf("%d", total);
}