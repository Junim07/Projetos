#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void compararstring(char *string1, char string2[], char *maiorstring){
    int tamanho = strlen(string1), tamanho2 = strlen(string2);

    if(tamanho<tamanho2){
        strcpy(maiorstring, string2);
    } else{
        strcpy(maiorstring, string1);
        strcpy(string1, string2);
    }
}

void maiornumero(int vetor[], int *maiornumero){
    *maiornumero = vetor[0];
    for(int i = 0;i<10;i++){
        if(*maiornumero<vetor[i]){
            *maiornumero=vetor[i];
        }
    }
}

void substring(char string1[], char maiorstring[]){
    int tamanho = strlen(maiorstring), tamanho2 = strlen(string1), index = 0, vetor[10], referencial, maiorreferencial=0;
    for(int i=0;i<tamanho;i++){
        
        referencial = 0;
        index = 0;
        for(int num = 0; num<tamanho2 && i+num<tamanho ; num++){
            if(string1[index]==maiorstring[i+num]){
            index++;
            referencial++;
            if(tamanho2-1==index){
        printf("A string esta contida na string maior");
        return;
    }
        } else{
            vetor[i]=referencial;
            break;
        }
    }
}
    maiornumero(vetor, &maiorreferencial);
    printf("%d", maiorreferencial);
}

int main(){
    char string1[50], string2[50], maiorstring[50];

    printf("Digite uma frase: ");
    fgets(string1, sizeof(string1), stdin);
    printf("Digite outra frase: ");
    fgets(string2, sizeof(string2), stdin);

    compararstring(string1, string2, maiorstring);

    substring(string1, maiorstring);


}