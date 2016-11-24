#include "stdio.h"
#include "conio.h"

struct sessao{
    int fileiras[10];
    int poltronas[15];
    int statusPoltrona[15];
};

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

void reservarAssento(int opcaoFilme, int opcaoSessao, struct sessao ses){

    int fileiras[10];
    int poltronas[15];
    int contador, i, j, fileira, lugar;
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
                                    printf("\nPoltrona reservada!!!\n");

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
            printf("Opção Inválida!\n");
        }
    }
    else{
        printf("Opção Inválida!\n");
    }

    switch(opcaoSessao){
        case 1:
            ses1 = ses;
            break;
        case 2:
            ses2 = ses;
            break;
        case 3:
            ses3 = ses;
            break;
        case 4:
            ses4 = ses;
            break;
        case 5:
            ses5 = ses;
            break;
        case 6:
            ses6 = ses;
            break;
        case 7:
            ses7 = ses;
            break;
        case 8:
            ses8 = ses;
            break;
        case 9:
            ses9 = ses;
            break;
        case 10:
            ses10 = ses;
            break;
        case 11:
            ses11 = ses;
            break;
        case 12:
            ses12 = ses;
            break;
    }
}

void verificaSessaoEReserva(int opcaoFilme, int opcaoSessao){
    switch(opcaoSessao){
        case 1:
            reservarAssento(opcaoFilme, opcaoSessao, ses1);
            break;
        case 2:
            reservarAssento(opcaoFilme, opcaoSessao, ses2);
            break;
        case 3:
            reservarAssento(opcaoFilme, opcaoSessao, ses3);
            break;
        case 4:
            reservarAssento(opcaoFilme, opcaoSessao, ses4);
            break;
        case 5:
            reservarAssento(opcaoFilme, opcaoSessao, ses5);
            break;
        case 6:
            reservarAssento(opcaoFilme, opcaoSessao, ses6);
            break;
        case 7:
            reservarAssento(opcaoFilme, opcaoSessao, ses7);
            break;
        case 8:
            reservarAssento(opcaoFilme, opcaoSessao, ses8);
            break;
        case 9:
            reservarAssento(opcaoFilme, opcaoSessao, ses9);
            break;
        case 10:
            reservarAssento(opcaoFilme, opcaoSessao, ses10);
            break;
        case 11:
            reservarAssento(opcaoFilme, opcaoSessao, ses11);
            break;
        case 12:
            reservarAssento(opcaoFilme, opcaoSessao, ses12);
            break;
    }
}
