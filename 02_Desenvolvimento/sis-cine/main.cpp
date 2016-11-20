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
    // Inserindo a Localidade para mostrar acentuação e unidades monetárias
    setlocale(LC_ALL, "Portuguese");

    int opcaoMenu, opcaoFilme;

    exibirBoasVindas();
    pularLinha(1);
    exibirMenuPrincipal();
    pularLinha(1);

    printf("Escolha uma opção: ");
    scanf("%d", &opcaoMenu);

    printf("Opção escolhida: %d", opcaoMenu);
    pularLinha(1);
    system("pause");
    limparTela();

    switch(opcaoMenu)
    {
        case 1:
            exibirFilmesDisponiveis();
            pularLinha(1);

            printf("Selecione uma opção: ");
            scanf("%d", &opcaoFilme);

            printf("Opção escolhida: %d", opcaoFilme);
            break;
        case 2:
            exibirMenuFechamento();
            break;
        case 3:
            printf("Você selecionou a opção para sair do sistema.... Até logo!");
            break;
    }
}
