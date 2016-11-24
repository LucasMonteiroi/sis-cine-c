#include "stdio.h"
#include "conio.h"

struct sessao{
    int fileiras[10];
    int poltronas[15];
    int statusPoltrona[15];
};

struct sessao ses1;

void iniciarPoltronas(){
    int i;
    for(i=0;i<=15;i++)
    {
        ses1.statusPoltrona[i] = 0;
    }
}

void exibirAssentos(int opcaoFilme, int opcaoSessao){

    int fileiras[10];
    int poltronas[15];
    int contador, i, j, fileira, lugar;
    contador = 0;

    for(i=0;i<10;i++){
        contador += 1;
        ses1.fileiras[i] = contador;
    }

    contador = 0;
    for(i=0;i<15;i++)
    {
        contador += 1;
        ses1.poltronas[i] = contador;
    }

    for(i=0;i<10;i++){
            if(i == 9){
                printf("\nFileira %d : | ", ses1.fileiras[i]);
            }
            else{
                printf("\nFileira  %d : | ", ses1.fileiras[i]);
            }

        for(j=0;j<15;j++){
            printf("%d | ", ses1. poltronas[j]);

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
                if(ses1.fileiras[i] == fileira){
                    for(j=0;j<15;j++){
                            if(lugar == ses1.poltronas[j]){
                                if(ses1.statusPoltrona[j] == 0){
                                    ses1.statusPoltrona[j] = 1;
                                    printf("\nPoltrona reservada!!!\n");

                                    printf("\nFileira Selecionada: %d", ses1.fileiras[i]);
                                    printf("\nPoltrona Selecionada: %d\n", ses1.poltronas[j]);
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
}
