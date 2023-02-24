#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void tabuleiro(char casa[9]) {
    printf("\n                                                              [ %c ] | [ %c ] | [ %c ] \n\n", casa[6], casa[7], casa[8]);
    printf("\n                                                              [ %c ] | [ %c ] | [ %c ] \n\n", casa[3], casa[4], casa[5]);
    printf("\n                                                              [ %c ] | [ %c ] | [ %c ] \n\n", casa[0], casa[1], casa[2]);
}

int main() {

    //criação da variavel vazia para tabuleiro;
    char casapvp[9], casapve[9], resposta, jogador1[15], jogador2[15];
    int rodada, vez=0, opcao, jogada, i;


    do {

        //Menuu do jogo::
        printf("                        ***********************************************************************************************\n");
        printf("                        *********************************** SEJA BEM VINDO AO NOSSO ***********************************\n");
        printf("                        ***********************************      JOGO DA VELHA      ***********************************\n");
        printf("                        *********************************** SELECIONE MODO DE JOGO: ***********************************\n");
        printf("                        ***********************************     1- PVP | 2- PVE     ***********************************\n");
        printf("                        ***********************************************************************************************\n");
        printf("                        ***********************************        3 - SAIR         ***********************************\n");
        printf("                        ***********************************************************************************************\n");
        scanf("%i", &opcao);

        switch (opcao) {


            case 2:

                printf("                        ****************************************** MODO PVE *******************************************\n\n");

                printf("                        Digite o seu nome de jogador: ");
                scanf("%s", &jogador1);
                printf("\n\n                        VOCE ESTA JOGANDO CONTRA A MAQUINA AGORA\n\n");

                do{
                    rodada = 1;
                    for(i=0;i<=8;i++){
                        casapve[i]=' ';
                    }

                    do{

                        //tabuleiro do jogo
                        tabuleiro(casapve);

                        //apresentar quem esta jogando
                        if (vez % 2 == 0) {
                            printf("                                                        %s, sua vez, voce marca (X) \n", jogador1);
                            printf("                        Digite a linha que deseja preencher:");
                            scanf("%i", &jogada);




                        } else {

                            printf("                                                        MAQUINA  JOGA,  MARCA   (O) \n");
                            //MAQUINA GANHAAA::::::
                            if(casapve[1] == 'O' && casapve[2] == casapve[1] && casapve[0] == ' ' || casapve[3] == 'O' && casapve[3] == casapve[6] && casapve[0] == ' ' || casapve[4] == 'O' && casapve[4] == casapve[8] && casapve[0] == ' ') {
                                jogada = 1;}
                            else if(casapve[0] == 'O' && casapve[0] == casapve[2] && casapve[1] == ' ' || casapve[4] == 'O' && casapve[7] == casapve[4] && casapve[1] == ' '){
                                jogada = 2;}
                            else if(casapve[0] == 'O' && casapve[0] == casapve[1] && casapve[2] == ' ' || casapve[4] == 'O' && casapve[4] == casapve[6] && casapve[2] == ' ' || casapve[8] == 'O' && casapve[8] == casapve[5] && casapve[2] == ' '){
                                jogada = 3;}
                            else if(casapve[0] == 'O' && casapve[0] == casapve[6] && casapve[3] == ' ' || casapve[4] == 'O' && casapve[4] == casapve[5] && casapve[3] == ' '){
                                jogada = 4;}
                            else if(casapve[0] == 'O' && casapve[0] == casapve[8] && casapve[4] == ' ' || casapve[1] == 'O' && casapve[1] == casapve[7] && casapve[4] == ' ' || casapve[2] == 'O' && casapve[2] == casapve[6] && casapve[4] == ' ' || casapve[3] == 'O' && casapve[3] == casapve[5] && casapve[4] == ' '){
                                jogada = 5;}
                            else if(casapve[2] == 'O' && casapve[2] == casapve[8] && casapve[5] == ' ' || casapve[3] == 'O' && casapve[3] == casapve[4] && casapve[5] == ' '){
                                jogada = 6;}
                            else if(casapve[0] == 'O' && casapve[0] == casapve[3] && casapve[6] == ' ' || casapve[8] == 'O' && casapve[8] == casapve[7] && casapve[6] == ' ' || casapve[4] == 'O' && casapve[2] == casapve[4] && casapve[6] == ' '){
                                jogada = 7;}
                            else if(casapve[1] == 'O' && casapve[1] == casapve[4] && casapve[7] == ' ' || casapve[6] == 'O' && casapve[6] == casapve[8] && casapve[7] == ' '){
                                jogada = 8;}
                            else if(casapve[6] == 'O' && casapve[6] == casapve[7] && casapve[8] == ' ' || casapve[0] == 'O' && casapve[4] == casapve[0] && casapve[8] == ' ' || casapve[2] == 'O' && casapve[5] == casapve[2] && casapve[8] == ' '){
                                jogada = 9;}

                                //MAQUINAA PERDEEE:::::
                            else if(casapve[1] == 'X' && casapve[2] == casapve[1] && casapve[0] == ' ' || casapve[3] == 'X' && casapve[3] == casapve[6] && casapve[0] == ' ' || casapve[4] == 'X' && casapve[4] == casapve[8] && casapve[0] == ' ') {
                                jogada = 1;}
                            else if(casapve[0] == 'X' && casapve[0] == casapve[2] && casapve[1] == ' ' || casapve[4] == 'X' && casapve[7] == casapve[4] && casapve[1] == ' '){
                                jogada = 2;}
                            else if(casapve[0] == 'X' && casapve[0] == casapve[1] && casapve[2] == ' ' || casapve[4] == 'X' && casapve[4] == casapve[6] && casapve[2] == ' ' || casapve[8] == 'X' && casapve[8] == casapve[5] && casapve[2] == ' '){
                                jogada = 3;}
                            else if(casapve[0] == 'X' && casapve[0] == casapve[6] && casapve[3] == ' ' || casapve[4] == 'X' && casapve[4] == casapve[5] && casapve[3] == ' '){
                                jogada = 4;}
                            else if(casapve[0] == 'X' && casapve[0] == casapve[8] && casapve[4] == ' ' || casapve[1] == 'X' && casapve[1] == casapve[7] && casapve[4] == ' ' || casapve[2] == 'X' && casapve[2] == casapve[6] && casapve[4] == ' ' || casapve[3] == 'X' && casapve[3] == casapve[5] && casapve[4] == ' '){
                                jogada = 5;}
                            else if(casapve[2] == 'X' && casapve[2] == casapve[8] && casapve[5] == ' ' || casapve[3] == 'X' && casapve[3] == casapve[4] && casapve[5] == ' '){
                                jogada = 6;}
                            else if(casapve[0] == 'X' && casapve[0] == casapve[3] && casapve[6] == ' ' || casapve[8] == 'X' && casapve[8] == casapve[7] && casapve[6] == ' ' || casapve[4] == 'X' && casapve[2] == casapve[4] && casapve[6] == ' '){
                                jogada = 7;}
                            else if(casapve[1] == 'X' && casapve[1] == casapve[4] && casapve[7] == ' ' || casapve[6] == 'X' && casapve[6] == casapve[8] && casapve[7] == ' '){
                                jogada = 8;}
                            else if(casapve[6] == 'X' && casapve[6] == casapve[7] && casapve[8] == ' ' || casapve[0] == 'X' && casapve[4] == casapve[0] && casapve[8] == ' ' || casapve[2] == 'X' && casapve[5] == casapve[2] && casapve[8] == ' '){
                                jogada = 9;

                            }else {
                                do {
                                    srand((unsigned) time(NULL));
                                    jogada = 1 + rand() % 9;
                                } while (casapve[jogada - 1] != ' ');
                            }
                        }

                        //seleção da casa


                        //jogadas validas
                        if (jogada < 1 || jogada > 9 || casapve[jogada - 1]!= ' ') {
                            jogada--;
                            vez--;
                            rodada--;
                            printf("\n\n                        ************CASA INVALIDA TENTE DIGITAR NOVAMENTE************\n\n");

                        } else {
                            //condição de posição
                            if (vez % 2 == 0) {
                                casapve[jogada - 1] = 'X';

                            } else {
                                casapve[jogada - 1] = 'O';
                            }
                        }

                        vez++;
                        rodada++;

                        //CONDIÇÕES DE VITORIA:::
                        if(casapve[3] != ' ') {
                            if(casapve[3] == casapve[0] && casapve[3] == casapve[6] || casapve[3] == casapve[4] && casapve[3] == casapve[5]){

                                rodada=100;
                            }
                        }

                        if(casapve[2] != ' '){
                            if(casapve[2] == casapve[0] && casapve[2] == casapve[1] || casapve[2] == casapve[5] && casapve[2] == casapve[8] || casapve[2] == casapve[4] && casapve[2] == casapve[6]){

                                rodada=100;
                            }
                        }

                        if(casapve[8] != ' '){
                            if(casapve[8] == casapve[6] && casapve[8] == casapve[7] || casapve[8] == casapve[4] && casapve[8] == casapve[0]){

                                rodada=100;
                            }

                        }

                        if(casapve[1] != ' '){
                            if(casapve[1] == casapve[4] && casapve[1] == casapve[7]){

                                rodada=100;
                            }

                        }
                    }while(rodada<=9);


                    if(rodada>9 && rodada != 100) {
                        tabuleiro(casapve);
                        printf("\n                    ***********************************        O  JOGO  DEU   VELHA         ****************************\n\n");
                    }else{
                        tabuleiro(casapve);
                        printf("\n                    ***********************************        PARABENS VOCE GANHOU         ****************************\n\n");
                    }


                    printf("\t\t\t\t\t            DESEJA JOGAR NOVAMENTE? s - Sim | n - Nao: ");
                    scanf("%s", &resposta);

                } while (resposta == 's');

                break;

            case 3:
                printf("                        _____________________________________ VOCE ESCOLHEU  SAIR _____________________________________");
                return 0;

        }

    }while(opcao != 1);
    printf("                        ****************************************** MODO PVP *******************************************\n\n");

    //jogo em si::
    do {
        //nome dos jogadores::
        printf("                        Digite o nome do primeiro jogador: ");
        scanf("%s", &jogador1);
        printf("\n                        Digite agora o nome do segundo jogador:");
        scanf("%s", &jogador2);


        rodada = 1;
        for(i=0;i<=8;i++){
            casapvp[i]=' ';
        }


        do {


            //tabuleiro do jogo
            tabuleiro(casapvp);


            //apresentar quem esta jogando
            if (vez % 2 == 0) {
                printf("                                                        %s, sua vez, voce marca (X) \n", jogador1);
            } else {
                printf("                                                        %s, sua vez, voce marca (O) ************\n", jogador2);
            }

            //seleção de casa::
            printf("                        Digite a linha que deseja preencher:");
            scanf("%i", &jogada);



            //jogadas invalidas
            if (jogada < 1 || jogada > 9 || casapvp[jogada - 1]!= ' ') {
                jogada = 0;
                vez=0;
                rodada=0;
                printf("\n\n                        ************CASA INVALIDA TENTE DIGITAR NOVAMENTE************\n\n");


                //Em jogoo, condições::
            } else {
                //condição de posição
                if (vez % 2 == 0) {
                    casapvp[jogada - 1] = 'X';

                } else{
                    casapvp[jogada - 1] = 'O';
                }

            }
            vez++;
            rodada++;

            //CONDIÇÕES DE VITORIA:::
            if(casapvp[3] != ' ') {
                if(casapvp[3] == casapvp[0] && casapvp[3] == casapvp[6] || casapvp[3] == casapvp[4] && casapvp[3] == casapvp[5]){

                    rodada=100;
                }
            }

            if(casapvp[2] != ' '){
                if(casapvp[2] == casapvp[0] && casapvp[2] == casapvp[1] || casapvp[2] == casapvp[5] && casapvp[2] == casapvp[8] || casapvp[2] == casapvp[4] && casapvp[2] == casapvp[6]){

                    rodada=100;
                }
            }

            if(casapvp[8] != ' '){
                if(casapvp[8] == casapvp[6] && casapvp[8] == casapvp[7] || casapvp[8] == casapvp[4] && casapvp[8] == casapvp[0]){

                    rodada=100;
                }

            }

            if(casapvp[1] != ' '){
                if(casapvp[1] == casapvp[4] && casapvp[1] == casapvp[7]){

                    rodada=100;
                }

            }


        } while (rodada <= 9);


        if(rodada>9 && rodada != 100) {
            tabuleiro(casapvp);
            printf("\n                    ***********************************        O  JOGO  DEU   VELHA         ****************************\n\n");
        }else{
            tabuleiro(casapvp);
            printf("\n                    ***********************************        PARABENS VOCE GANHOU         ****************************\n\n");
        }

        printf("\t\t\t\t\t            DESEJAM JOGAR NOVAMENTE? s - Sim | n - Nao: ");
        scanf("%s", &resposta);

    } while (resposta == 's');
    return 0;
}
