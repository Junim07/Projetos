#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int nota[4];
int media;

int main(){

    for(int i=0;i<4;i++){
        printf("Digite as notas");
        scanf("%d", &nota[i]);
    }
    for(int i=0;i<4;i++){
        media+=nota[i];
    }
    printf("A sua media e: %d", media/4);
}