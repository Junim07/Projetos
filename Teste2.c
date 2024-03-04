#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int campeoes(char campeao[]){
    struct campeoes{
        char nome[50];
        int vitorias;
        int derrotas;
        float winrate;
    };
    struct campeoes campeoes[30];
    int referencial=0;

    for(int i = 0; i<30; i++){
    char *token = strstr(campeoes[i].nome, campeao);
        if(token!=NULL){
            printf("O campeao foi encontrado, acessando dados: ");
            return 1;
        } 
    }
    printf("O campeao nao foi encontrado, adicionando...");
    strcpy(campeoes[referencial].nome, campeao);
    referencial++;
    return 1;
}

int main(){
    int escolha;
    char campeao[50];
    while(1){
printf("Escolha o que deseja ser feito: \n");
printf("1 - Adicionar campeao \n");
printf("2 - sair do programa \n");
scanf("%d", &escolha);

switch(escolha){
    case 1:
        printf("Digite o nome do campeao: ");
        scanf("%s", campeao);
        campeoes(campeao);
        break;
    case 2:
        return 0;
        break;
}
}
}