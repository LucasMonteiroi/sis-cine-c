#include "stdio.h"
#include "conio.h"
#include "locale.h"
#include "cstdlib"
#include "menu.c"
#include "sessoes.c"

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

    int opcaoMenu, opcaoFilme, opcaoSessao, opcaoValida, opcaoFechamento;

    iniciarPoltronas();

    while(opcaoMenu != 3){
        exibirBoasVindas();
        pularLinha(1);
        exibirMenuPrincipal();
        pularLinha(1);

        printf("Escolha uma opção: ");
        scanf("%d", &opcaoMenu);

        opcaoValida = validaMenu(opcaoMenu);

        if(opcaoValida == 1){
            printf("Opção escolhida: %d", opcaoMenu);
        }
        else{
            system("pause");
            limparTela();
        }

        pularLinha(1);

        if(opcaoMenu == 3){
            printf("Você selecionou a opção para sair do sistema.... Até logo!");
        }
        switch(opcaoMenu)
        {
            case 1:
                limparTela();
                exibirFilmesDisponiveis();
                pularLinha(1);

                printf("Selecione uma opção: ");
                scanf("%d", &opcaoFilme);

                opcaoValida = validarFilme(opcaoFilme);

                if(opcaoValida == 1){
                    printf("Opção escolhida: %d", opcaoFilme);
                }
                else
                {
                    system("pause");
                    limparTela();
                    break;
                }

                pularLinha(1);
                exibirSessaoParaFilme(opcaoFilme);

                pularLinha(1);

                printf("Escolha uma opção: ");
                scanf("%d", &opcaoSessao);

                opcaoValida = validarSessao(opcaoSessao, opcaoFilme);

                if(opcaoValida == 1){
                    printf("Opção escolhida: %d", opcaoSessao);
                }
                else{
                    system("pause");
                    limparTela();
                    break;
                }

                exibirAssentos(opcaoFilme, opcaoSessao);

                system("pause");
                limparTela();
                break;
            case 2:
                limparTela();
                exibirMenuFechamento();

                pularLinha(1);

                printf("Escolha uma opção: ");
                scanf("%d", &opcaoFechamento);

                system("pause");
                break;
        }
    }


}
