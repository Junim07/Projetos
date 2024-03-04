#include <stdio.h>
#include <stdlib.h>

void ordemcrescente(int vetor[], int n){
    int j = 0, temporario = 0;
    for(int i = 0; i<n;i++){
        for(j=i;j<n;j++){
            if(vetor[i]>vetor[j+1]){
                temporario = vetor[i];
                vetor[i] = vetor[j+1];
                vetor[j+1] = temporario;
            }
        }
    }
}

int main(){
    int vetor[10] = {3,6,5,1,2,8,9,7,0,4};
    ordemcrescente(vetor, 10);
    for(int i =0;i<10;i++){
        printf("%d ", vetor[i]);
    }
}