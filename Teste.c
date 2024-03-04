#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct campeoes{
    char nome[50];
    int partidas, vitorias, derrotas;
    float winrate;
};

struct campeoes campeoes[30];
char campeao[50], hash[500];
int referencial=0, posicao=0, escolha, escolhainicial, condicao=1, listacampeoes, vitorias=0, derrotas=0, verificarnumero;
int iniciohash=1, limitehash, avanco=0, verificarvitoria=0, verificarderrota=0, setarvitoria, setarderrota, escolhawinrate;
int winrateformatada, champexcluido=0, preencherchamp;
int origem, destino, tamanho;

void informacoes(){
    
    switch(escolha){
        case 1:
                    printf("Quantas vitorias deseja adicionar? ");
                    scanf("%d", &vitorias);
                    campeoes[posicao].vitorias= campeoes[posicao].vitorias + vitorias;
                    printf("Quantidade de vitorias adicionada com sucesso \n");
                    break;
        case 2:
                    printf("Quantas derrotas deseja adicionar? ");
                    scanf("%d", &derrotas);
                    campeoes[posicao].derrotas=campeoes[posicao].derrotas + derrotas;
                    printf("Quantidade de derrotas adicionada com sucesso \n");
                    break;
        case 3:
                    printf("Quantas vitorias deseja excluir? ");
                    scanf("%d", &vitorias);
                    campeoes[posicao].vitorias=campeoes[posicao].vitorias-vitorias;
                    printf("Quantidade de vitorias excluida com sucesso \n");
                    break;
        case 4:
                    printf("Quantas derrotas deseja excluir? ");
                    scanf("%d", &derrotas);
                    campeoes[posicao].derrotas=campeoes[posicao].derrotas-derrotas;
                    printf("Quantidade de derrotas excluida com sucesso \n");
                    break;
        case 5:
                    printf("Quantas vitorias deseja setar? ");
                    scanf("%d", &setarvitoria);
                    campeoes[posicao].vitorias=setarvitoria;
                    break;

        case 6:
                    printf("Quantas derrotas deseja setar? ");
                    scanf("%d", &setarderrota);
                    campeoes[posicao].derrotas=setarderrota;
                    break;
        case 7:
                    printf("1 - Definir winrate com base nas partidas do campeao \n");
                    printf("2 - Definir a winrate com base em um valor novo \n");
                    scanf("%d", &escolhawinrate);
                    if(escolhawinrate==1){
                        campeoes[posicao].partidas=campeoes[posicao].vitorias+campeoes[posicao].derrotas;
                        printf("Qual o valor da nova winrate que voce deseja declarar? ");
                        scanf("%d", &winrateformatada);
                        campeoes[posicao].vitorias=campeoes[posicao].partidas * winrateformatada / 100;
                        campeoes[posicao].derrotas=campeoes[posicao].partidas - campeoes[posicao].vitorias;
                        printf("Sua winrate foi formatada, os novos valores para vitorias e derrotas sao: %d %d \n", campeoes[posicao].vitorias, campeoes[posicao].derrotas);
                        system("pause");
                    } else{
                        printf("Digite a nova quantidade de partidas: ");
                        scanf("%d", &campeoes[posicao].partidas);
                        printf("Digite a winrate desejada: ");
                        scanf("%d", &winrateformatada);
                        campeoes[posicao].vitorias=campeoes[posicao].partidas * winrateformatada / 100;
                        campeoes[posicao].derrotas=campeoes[posicao].partidas - campeoes[posicao].vitorias;
                        printf("Sua winrate foi formatada, os novos valores para vitorias e derrotas sao: W%d L%d \n", campeoes[posicao].vitorias, campeoes[posicao].derrotas);
                        system("pause");
                    }
                    break;
        case 8:
                    printf("As estatisticas do %s sao: \n", campeoes[posicao].nome);
                    printf("Vitorias: %d \n", campeoes[posicao].vitorias);
                    printf("Derrotas: %d \n", campeoes[posicao].derrotas);
                    campeoes[posicao].partidas=campeoes[posicao].vitorias+campeoes[posicao].derrotas;
                    campeoes[posicao].winrate=((float)campeoes[posicao].vitorias / campeoes[posicao].partidas)*100;
                    printf("Winrate: %%%.2f", campeoes[posicao].winrate);
                    system("pause");
                    break;
        case 9:
            condicao=0;
            break;
    }
}


int excluirchamp(){
    
    if(referencial==0){
        printf("Nao ha campeoes adicionados para poderem ser deletados");
        return 1;
    } else{
        printf("Digite o nome do campeao que vai ser deletado: ");
        scanf("%s", campeao);
        char *comparador;
        int i=0;
        for(i=0;i<=referencial;i++){
        *comparador=strstr(campeoes[i].nome, campeao);
        if(*comparador!=NULL){
            printf("Deletando o campeao \n");
            for(int j=i;j<referencial-1;j++){
                strcpy(campeoes[j].nome, campeoes[j+1].nome);
                campeoes[j].vitorias=campeoes[j+1].vitorias;
                campeoes[j].derrotas=campeoes[j+1].derrotas;
}
            memset(campeoes[referencial-1].nome, '\0', sizeof(campeoes[referencial-1].nome));
            campeoes[referencial].vitorias=0;
            campeoes[referencial].derrotas=0;
            referencial--;
}
}
}
}

void valores(){
    
    condicao=1;
    while(condicao==1){
    printf("Campeao escolhido: %s \n", campeoes[posicao].nome);
    printf("Escolha o que deseja fazer \n");
    printf("1 - Atribuir vitorias\n");
    printf("2 - Atribuir derrotas\n");
    printf("3 - Excluir vitorias \n");
    printf("4 - Excluir derrotas \n");
    printf("5 - Setar um valor total de vitorias \n");
    printf("6 - Setar um valor total de derrotas \n");
    printf("7 - Defina uma winrate \n");
    printf("8 - Verificar estatisticas \n");
    printf("9 - Retornar ao menu \n");
    scanf("%d", &escolha);
    informacoes();
}
}

int champ();

int gerarhash(){
    
	if(referencial==0){
		printf("voce nao adicionou campeoes para gerar um codigo hash \n");
	} else{
	printf("O seu codigo hash e: ");
	printf("%d ", referencial);	
	for(int i=0;i<referencial;i++){
	printf("%s %d %d ", campeoes[i].nome, campeoes[i].vitorias, campeoes[i].derrotas);
}
}
}
int validarnumero(char *numero){
    if(*numero>57 || *numero<48){
        verificarnumero=0;
        return 1;
    }verificarnumero=1;
    return 1;
}

int HASH(){
    
    printf("Insira o seu codigo Hash: ");
    fgets(hash, sizeof(hash), stdin);
    char *token = strtok(hash, " \t\n");
    int contadorcampeoes;
        while(token!=NULL){
        	validarnumero(token);
			if(verificarnumero==1 && iniciohash!=0){
                referencial=atoi(token);
                iniciohash=0;
        }
			else if(verificarnumero==0){
                strcpy(campeoes[contadorcampeoes].nome , token);
            } else if(verificarnumero==1 && verificarvitoria==verificarderrota){
                campeoes[contadorcampeoes].vitorias=atoi(token);
                verificarvitoria++;
            } else if(verificarnumero==1 && verificarvitoria!=verificarderrota){
                campeoes[contadorcampeoes].derrotas = atoi(token);
                verificarderrota++;
                contadorcampeoes++;
            }
            token=strtok(NULL, " \t\n");
            }
    return 1;
	}


int lista(){
    if(referencial==0){
        printf("Nenhum campeao foi adicionado \n");
        champ();
    } else{
    printf("Os campeoes adicionados foram: \n");
    printf("%d ", referencial);
    if(champexcluido==0){
    for(int i=0;i<=referencial-1;i++){
        printf("%s ", campeoes[i].nome);
    } 
    }   else {
        for(int i=0;i<=referencial;i++){
        printf("%s ", campeoes[i].nome);
    }
}
}
return 1;
}

int champ(){
    
    while(1){
    
    printf("Escolha o que deseja ser feito: \n");
    printf("1 - Digitar o nome de um champion: \n");
    printf("2 - Excluir champion \n");
    printf("3 - Ver a lista de campeoes que foram adicionados \n");
    printf("4 - Sair do programa \n");
    printf("5 - Gerar codigo hash \n");
    printf("6 - Digitar um codigo HASH \n");
    listacampeoes=0;
    scanf("%d", &escolhainicial);
    getchar();
        
        switch(escolhainicial){
            case 1:
                printf("Digite o nome do champion ");
                scanf("%s", campeao);
                return 1;
                break;
            case 2:
                excluirchamp();
                break;
            case 3:
                lista();
                break;
            case 4:
                return 0;
                break;
            case 5:
            	gerarhash();
            	break;
            case 6:
                HASH();
                break;
            default:
                printf("Voce digitou um valor invalido \n");
        }
} 
}



int main(){
    
        while(1){
            if(!champ()){
                break;
            }
        char comparador;
        int encontrado=0;
        for(int i=0;i<=strlen(campeao);i++){
            campeao[i]=tolower(campeao[i]);
        }

    
    for(int i=0;i<=29;i++){
        encontrado=0;
        comparador=strstr(campeoes[i].nome, campeao);
        if(comparador!=NULL){
            printf("O campeao foi encontrado, acessando os dados \n");
            encontrado=1;
            posicao=i;
            valores();
            break;
        }
    }if(encontrado!=1){
    int i=referencial;
            printf("O campeao nao foi encontrado, adicionando... \n");
            strcpy(campeoes[i].nome , campeao);
            referencial++;
}
}
}
