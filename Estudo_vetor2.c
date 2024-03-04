#include <stdio.h>
#include <stdlib.h>

void media(int *ponteiro){
    float media = 0;
    for(int i=0; i<5;i++){
        media += *ponteiro;
        ponteiro++;
    }
    *(ponteiro - 1)= media / 5;
}

int main(){
    int vetor[5] = {10, 15, 20, 25, 30};
    media(vetor);
    printf("%d", vetor[3]);
}