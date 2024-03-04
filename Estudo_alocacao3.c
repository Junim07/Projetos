#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int concatenarinteiros(int *num1, int tamanho1, int *num2, int tamanho2){
    char *numfinal, stringnum1[50], stringnum2[50];
    numfinal = (char *) malloc((tamanho1+tamanho2+1)* sizeof(char));

    sprintf(stringnum1, "%d", *num1);
    sprintf(stringnum2, "%d", *num2);

    strcpy(numfinal, stringnum1);
    strcat(numfinal, stringnum2);

    return atoi(numfinal);
    free(numfinal);
}
int main(){
    int num[2], tamanho1, tamanho2, numeroconcatenado;
    char stringnum1[50], stringnum2[50];

    for(int i = 0;i<2;i++){
        printf("Digite os numeros:");
        scanf("%d", &num[i]);
        if(i==0){
            sprintf(stringnum1, "%d", num[i]);
            tamanho1 = strlen(stringnum1)+1;
        } else{
            sprintf(stringnum2, "%d", num[i]);
            tamanho2 = strlen(stringnum2)+1;
        }
    }

    numeroconcatenado = concatenarinteiros(&num[0], tamanho1, &num[1], tamanho2);

    printf("%d", numeroconcatenado);
}