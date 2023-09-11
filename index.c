#include <stdio.h>
#include <time.h>

int jogoFacil(){


}

int main(){
    srand(time(NULL));
    int option = 1, vidas = 0;

    do{
        printf("\t\tGUESS THE NUMBER\n\n|  --> Selecione a dificuldade do jogo:  |\n\n|1 - Easy (1-50, sem limite de vidas)\n|2 - Medium (1-50, 10 vidas)\n|3 - Hard (1-100, 10 vidas )\n|4 - Very Hard (1-100, 5 vidas)\n|5 - Personalizado (Escolha o range e a qauntidade de palpites)\n|0 - Sair\n\n--> ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("\t\tJOGO FACIL\n\n");
            int numero = rand() % 50, ultimoPalpite, palpite, palpites = 0;
            do{
                printf("Digite um inteiro: ");
                scanf("%d", &palpite);
                printf("\n");
                palpites++;
                ultimoPalpite = palpite;
                if(palpite == numero){
                    printf("\t\tVOCE GANHOOOOOOOU!!!!!!\nNumero da vez: %d\nQuantidade de palpites: %d\n\n", numero, palpites);
                }else{
                    palpite > numero? printf("<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>\n\n");
                    printf("Ultimo palpite: %d\nQuantidade de palpites: %d\n\n", ultimoPalpite, palpites);
                }
            }while(palpite != numero);
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