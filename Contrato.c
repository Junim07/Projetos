#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int excluircaractere(int tamanho, char *palavra, int lugar){
    for(int i = lugar; i<tamanho-1; i++){
        palavra[i]=palavra[i+1];
    }
    palavra[tamanho-1] = '\0';
    return 1;
}

int main(){
    srand(time(NULL));
    char stringcontrato[10], stringerro[10];
    int numeroerro = rand() % 10;
    int valorcontrato = rand() % 100000000;

    sprintf(stringcontrato, "%d", valorcontrato);
    sprintf(stringerro, "%d", numeroerro);
    int tamanho = strlen(stringcontrato);

    if(stringcontrato[0]!=0 || stringcontrato[0]!=0){

    

    if(stringcontrato[0]==stringerro[0]){
        printf("0");
        return 0;
    }

    for(int i=0; i<tamanho; i++){
        if(stringcontrato[i]==stringerro[0]){
            excluircaractere(tamanho, stringcontrato, i);
        }
    }
    printf("%d %d \n", numeroerro, valorcontrato);
    printf("%s", stringcontrato);
} else{
    printf(" ");
}
}