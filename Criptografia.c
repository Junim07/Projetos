#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void codificar (char *palavracodificada){
    while(*palavracodificada!='\0'){
        *palavracodificada+=3;
        palavracodificada++;
    }
}

void invertercodigo (int tamanho, char *palavracodificada, char *palavrainvertida){
int index = tamanho - 1;
        for(int i=0; i<tamanho;i++){
            palavrainvertida[i]=palavracodificada[index];
            index--;
        }
}

void codificarmetade (int tamanho, int tamanhototal, char *palavrainvertida, char *codigofinal){
    for(int i=0; i<tamanhototal;i++){
        if(i>=tamanho && i<tamanhototal){
            codigofinal[i]=palavrainvertida[i]-=1;
        } else{
        codigofinal[i]=palavrainvertida[i];
        }
    }
}

int main(){
    char mensagem[50], mensagemcodificada[50], mensageminvertida[50], codigofinal[50];
    int index=0, tamanhoinicial;
    printf("Escreva uma mensagem: ");
    fgets(mensagem, sizeof(mensagem), stdin);

    char *token;

    tamanhoinicial=strlen(mensagem)/2;

    token = strtok(mensagem, "\t\n");
    while(token!=NULL){
        int tamanho;
        codificar(token);
        tamanho = strlen(token);

        for(int i=0;i<tamanho; i++){
            mensagemcodificada[index]=token[i];
            index++;
        }

        token = strtok(NULL, " ");
    }

        int tamanho = strlen(mensagemcodificada);
        invertercodigo(tamanho, mensagemcodificada, mensageminvertida);
        mensageminvertida[tamanho] = '\0';
        
        codificarmetade(tamanhoinicial, tamanho, mensageminvertida, codigofinal);

        codigofinal[tamanho] = '\0';

        printf("%s", codigofinal);
}