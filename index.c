#include <stdio.h>
#include <time.h>

void jogoFacil();
void jogoMedio();

int main(){
    srand(time(NULL));
    int option = 1, numero;

    do{
        printf("\t\tGUESS THE NUMBER\n\n|  --> Selecione a dificuldade do jogo:  |\n\n|1 - Easy (1-50, sem limite de vidas)\n|2 - Medium (1-50, 10 vidas)\n|3 - Hard (1-100, 10 vidas )\n|4 - Very Hard (1-100, 5 vidas)\n|5 - Personalizado (Escolha o range e a qauntidade de palpites)\n|0 - Sair\n\n--> ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("\t\tJOGO FACIL\n\n");
            numero = rand() % 50;
            jogoFacil(numero);
            break;
        case 2:
            printf("\t\tJOGO MEDIO\n\n");
            numero = rand() % 50;
            jogoMedio(numero);
            break;
        
        default:
            if(option!=0){
                printf("\t\tOPCAO INEXISTENTE\n\n");
            }
            break;
        }
    }while(option);
    return 0;
}

void jogoFacil(int numero){
    int ultimoPalpite, palpite, palpites = 0;
    do{
        printf("Digite um inteiro: ");
        scanf("%d", &palpite);
        printf("\n");
        palpites++;
        ultimoPalpite = palpite;
        if(palpite == numero){
            printf("\t\tVOCE GANHOOOOOOOU!!!!!!\nNumero da rodada: %d\nQuantidade de palpites: %d\n\n", numero, palpites);
        }else{
            palpite > numero? printf("<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>\n\n");
            printf("Ultimo palpite: %d\nQuantidade de palpites: %d\n\n", ultimoPalpite, palpites);
        }
    }while(palpite != numero);
}

void jogoMedio(int numero){
    int ultimoPalpite, palpite, palpites = 0, vidas = 10;
    do{
        printf("Digite um inteiro: ");
        scanf("%d", &palpite);
        printf("\n");
        palpites++;
        ultimoPalpite = palpite;
        if(palpite == numero){
            printf("\t\tVOCE GANHOOOOOOOU!!!!!!\nNumero da rodada: %d\nQuantidade de palpites: %d\n\n", numero, palpites);
        }else{
            vidas--;
            if(vidas == 0){
                printf("\tSuas vidas acabaram, VOCE PERDEU!\n\n");
            }else{
                palpite > numero? printf("<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>\n\n");
            }
            printf("Ultimo palpite: %d\nQuantidade de palpites: %d\nVidas restantes: %d\n\n", ultimoPalpite, palpites, vidas);
        }
    }while(palpite != numero && vidas != 0);
}