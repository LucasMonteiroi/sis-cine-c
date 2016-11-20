#include "stdio.h"
#include "conio.h"
#include "locale.h"
#include "cstdlib"
#include "menu.c"

void pularLinha(int linhas){
        int i;
        for(i=0;i<linhas;i++)
        {
            printf("\n");
        }
}

void limparTela(){
        system("cls");
}

int main()
{
    // Inserindo a Localidade para mostrar acentua��o e unidades monet�rias
    setlocale(LC_ALL, "Portuguese");

    int opcaoMenu, opcaoFilme;

    exibirBoasVindas();
    pularLinha(1);
    exibirMenuPrincipal();
    pularLinha(1);

    printf("Escolha uma op��o: ");
    scanf("%d", &opcaoMenu);

    printf("Op��o escolhida: %d", opcaoMenu);
    pularLinha(1);
    system("pause");
    limparTela();

    switch(opcaoMenu)
    {
        case 1:
            exibirFilmesDisponiveis();
            pularLinha(1);

            printf("Selecione uma op��o: ");
            scanf("%d", &opcaoFilme);

            printf("Op��o escolhida: %d", opcaoFilme);
            break;
        case 2:
            exibirMenuFechamento();
            break;
        case 3:
            printf("Voc� selecionou a op��o para sair do sistema.... At� logo!");
            break;
    }
}
