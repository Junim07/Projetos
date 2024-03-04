#include <stdio.h>
#include <stdlib.h>

void media(int alunos[][4], int *medias){
int soma=0;
    for(int l=0;l<4;l++){
        for(int c=0;c<4;c++){
            soma += alunos[l][c];
        }
        *medias = soma/4;
        soma=0;
        medias++;
    }
}

int main(){
    int alunos[4][4], medias[4], index=1;

        printf("Digite as notas do aluno %d: ", index);
        for(int l=0;l<4;l++){
            for(int c=0;c<4;c++){
                scanf("%d", &alunos[l][c]);
            }
            index++;
            printf("Digite as notas do aluno %d: ", index);
        }
    media(alunos, medias);
    printf("A media dos alunos foram: %d %d %d %d", medias[0], medias[1], medias[2], medias[3]);
}