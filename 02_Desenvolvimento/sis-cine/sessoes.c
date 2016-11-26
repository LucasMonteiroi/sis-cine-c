#include "stdio.h"
#include "conio.h"

struct sessao{
    int fileiras[10];
    int poltronas[15];
    int statusPoltrona[15];
};

struct tipoIngresso{
    int voucher;
    int inteiro;
    int meia;
};

struct tipoIngresso tipo;
struct tipoIngresso tipoReserva;

struct sessao ses1;
struct sessao ses2;
struct sessao ses3;
struct sessao ses4;
struct sessao ses5;
struct sessao ses6;
struct sessao ses7;
struct sessao ses8;
struct sessao ses9;
struct sessao ses10;
struct sessao ses11;
struct sessao ses12;

struct sessao sessaoReserva;
struct sessao sessaoPoltronas;

void liberarPoltronas(){
    int i;
    for(i=0;i<=15;i++)
    {
        ses1.statusPoltrona[i] = 0;
        ses2.statusPoltrona[i] = 0;;
        ses3.statusPoltrona[i] = 0;;
        ses4.statusPoltrona[i] = 0;;
        ses5.statusPoltrona[i] = 0;;
        ses6.statusPoltrona[i] = 0;;
        ses7.statusPoltrona[i] = 0;;
        ses8.statusPoltrona[i] = 0;;
        ses9.statusPoltrona[i] = 0;;
        ses10.statusPoltrona[i] = 0;;
        ses11.statusPoltrona[i] = 0;;
        ses12.statusPoltrona[i] = 0;;
    }
}

void mapearAssentos(struct sessao ses){
    int contador, i;
    contador = 0;

        for(i=0;i<10;i++){
        contador += 1;
        ses.fileiras[i] = contador;
        }

        contador = 0;
        for(i=0;i<15;i++)
        {
            contador += 1;
            ses.poltronas[i] = contador;
        }

    sessaoReserva = ses;
}

void reservarAssento(int opcaoFilme, int opcaoSessao, struct sessao ses){

    int fileiras[10];
    int poltronas[15];
    int contador, i, j, fileira, lugar, opcao, qtdIngresso;
    contador = 0;
    opcao = 1;

    qtdIngresso = 0;

    mapearAssentos(ses);

    while(opcao != 0){
        ses = sessaoReserva;
        //ses = sessaoPoltronas;


        for(i=0;i<10;i++){
                if(i == 9){
                    printf("\nFileira %d : | ", ses.fileiras[i]);
                }
                else{
                    printf("\nFileira  %d : | ", ses.fileiras[i]);
                }

            for(j=0;j<15;j++){
                printf("%d | ", ses. poltronas[j]);

            }
        }

        printf("\n");

        printf("\nSelecione a fileira: ");
        scanf("%d", &fileira);

        if(fileira <= 10){
            printf("Selecione a poltrona: ");
            scanf("%d", &lugar);

            if(lugar <= 15)
            {
                for(i=0;i<10;i++){
                    if(ses.fileiras[i] == fileira){
                        for(j=0;j<15;j++){
                                if(lugar == ses.poltronas[j]){
                                    if(ses.statusPoltrona[j] == 0){
                                        ses.statusPoltrona[j] = 1;

                                        printf("\nFileira Selecionada: %d", ses.fileiras[i]);
                                        printf("\nPoltrona Selecionada: %d\n", ses.poltronas[j]);

                                    }
                                    else{
                                        printf("Poltrona já reservada!\n");
                                    }
                            }
                        }
                    }
                }
            }
            else{
                printf("Poltrona Inválida!\n");
            }
        }
        else{
            printf("Fileira Inválida!\n");
        }

        sessaoReserva = ses;

        printf("\n Deseja selecionar mais alguma poltrona?");
        printf(" \n 1 - Sim | 0 - Não: ");
        scanf("%d", &opcao);

        if(opcao == 1){
            qtdIngresso += 1;
        }
        else{
            printf("\nIngressos selecionados: %d", qtdIngresso);

            printf("\nReservada Concluida!!!\n");
        }


    }


}


void liberarAssento(int opcaoFilme, int opcaoSessao, struct sessao ses){

    int fileiras[10];
    int poltronas[15];
    int contador, i, j, fileira, lugar;
    contador = 0;

    mapearAssentos(ses);

    ses = sessaoPoltronas;

    for(i=0;i<10;i++){
            if(i == 9){
                printf("\nFileira %d : | ", ses.fileiras[i]);
            }
            else{
                printf("\nFileira  %d : | ", ses.fileiras[i]);
            }

        for(j=0;j<15;j++){
            printf("%d | ", ses. poltronas[j]);

        }
    }

    printf("\n");

    printf("\nSelecione a fileira: ");
    scanf("%d", &fileira);

    if(fileira <= 10){
        printf("Selecione a poltrona: ");
        scanf("%d", &lugar);

        if(lugar <= 15)
        {
            for(i=0;i<10;i++){
                if(ses.fileiras[i] == fileira){
                    for(j=0;j<15;j++){
                            if(lugar == ses.poltronas[j]){
                                if(ses.statusPoltrona[j] == 1){
                                    ses.statusPoltrona[j] = 0;

                                    printf("\nPoltrona Liberada!!!\n");


                                }
                                else{
                                    printf("Poltrona já liberada!\n");
                                }
                        }
                    }
                }
            }
        }
        else{
            printf("Poltrona Inválida!\n");
        }
    }
    else{
        printf("Fileira Inválida!\n");
    }

    sessaoReserva = ses;

}


void verificaSessaoEReserva(int opcaoFilme, int opcaoSessao){
    switch(opcaoSessao){
        case 1:
            reservarAssento(opcaoFilme, opcaoSessao, ses1);
            ses1 = sessaoReserva;
            break;
        case 2:
            reservarAssento(opcaoFilme, opcaoSessao, ses2);
            ses2 = sessaoReserva;
            break;
        case 3:
            reservarAssento(opcaoFilme, opcaoSessao, ses3);
            ses3 = sessaoReserva;
            break;
        case 4:
            reservarAssento(opcaoFilme, opcaoSessao, ses4);
            ses4 = sessaoReserva;
            break;
        case 5:
            reservarAssento(opcaoFilme, opcaoSessao, ses5);
            ses5 = sessaoReserva;
            break;
        case 6:
            reservarAssento(opcaoFilme, opcaoSessao, ses6);
            ses6 = sessaoReserva;
            break;
        case 7:
            reservarAssento(opcaoFilme, opcaoSessao, ses7);
            ses7 = sessaoReserva;
            break;
        case 8:
            reservarAssento(opcaoFilme, opcaoSessao, ses8);
            ses8 = sessaoReserva;
            break;
        case 9:
            reservarAssento(opcaoFilme, opcaoSessao, ses9);
            ses9 = sessaoReserva;
            break;
        case 10:
            reservarAssento(opcaoFilme, opcaoSessao, ses10);
            ses10 = sessaoReserva;
            break;
        case 11:
            reservarAssento(opcaoFilme, opcaoSessao, ses11);
            ses11 = sessaoReserva;
            break;
        case 12:
            reservarAssento(opcaoFilme, opcaoSessao, ses12);
            ses12 = sessaoReserva;
            break;
    }
}

void desbloquearPoltronas(int opcaoFilme, int opcaoSessao){
    switch(opcaoSessao){
        case 1:
            liberarAssento(opcaoFilme, opcaoSessao, ses1);
            ses1 = sessaoReserva;
            break;
        case 2:
            liberarAssento(opcaoFilme, opcaoSessao, ses2);
            ses2 = sessaoReserva;
            break;
        case 3:
            liberarAssento(opcaoFilme, opcaoSessao, ses3);
            ses3 = sessaoReserva;
            break;
        case 4:
            liberarAssento(opcaoFilme, opcaoSessao, ses4);
            ses4 = sessaoReserva;
            break;
        case 5:
            liberarAssento(opcaoFilme, opcaoSessao, ses5);
            ses5 = sessaoReserva;
            break;
        case 6:
            liberarAssento(opcaoFilme, opcaoSessao, ses6);
            ses6 = sessaoReserva;
            break;
        case 7:
            liberarAssento(opcaoFilme, opcaoSessao, ses7);
            ses7 = sessaoReserva;
            break;
        case 8:
            liberarAssento(opcaoFilme, opcaoSessao, ses8);
            ses8 = sessaoReserva;
            break;
        case 9:
            liberarAssento(opcaoFilme, opcaoSessao, ses9);
            ses9 = sessaoReserva;
            break;
        case 10:
            liberarAssento(opcaoFilme, opcaoSessao, ses10);
            ses10 = sessaoReserva;
            break;
        case 11:
            liberarAssento(opcaoFilme, opcaoSessao, ses11);
            ses11 = sessaoReserva;
            break;
        case 12:
            liberarAssento(opcaoFilme, opcaoSessao, ses12);
            ses12 = sessaoReserva;
            break;
    }
}

