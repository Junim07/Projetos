#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    int numeroled=0;
    char valorstring[6];
    srand(time(NULL));
    int valor = rand() % 10000;
    sprintf(valorstring, "%d", valor);

    int tamanho = strlen(valorstring);

    for(int i=0; i<tamanho;i++){
        switch(valorstring[i]){
            case '1':
                numeroled = numeroled + 2;
                break;
            case '2':
            case '3':
            case '5':
                numeroled = numeroled + 5;
                break;
            case '4':
                numeroled = numeroled + 4;
                break;
            case '0':
            case '6':
            case '9':
                numeroled = numeroled + 6;
                break;
            case '7':
                numeroled = numeroled + 3;
                break;
            case '8':
                numeroled = numeroled + 7;
                break;
        }
    }
    printf("o numero e %d, e o numero de leds sao %d", valor, numeroled);
}
    