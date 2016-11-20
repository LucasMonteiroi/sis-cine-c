#include "stdio.h"
#include "conio.h"

struct sessao{
    int fileiras[10];
    int poltronas[15];
    int statusPoltrona[15];
};

struct sessao ses1;

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

    printf("Selecione a poltrona: ");
    scanf("%d", &lugar);

    for(i=0;i<10;i++){
            if(ses1.fileiras[i] == [fileira -1]){
                for(j=0;j<15;j++){
                    if(ses1.poltronas[j] == [lugar - 1]){
                        ses1.statusPoltrona[j] = 1;
                    }
                }
            }
    }

    printf("\nFileira Selecionada: %d", fileira);
    printf("\nPoltrona Selecionada: %d", lugar);
    printf("\nPoltrona reservada!!! %d\n", ses1.statusPoltrona[lugar]);
}
