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

    liberarPoltronas();
    inicializarPagamento();

    while(opcaoMenu != 0){
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

        if(opcaoMenu == 0){
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
                    printf("Opção escolhida: %d\n", opcaoFilme);
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
                    printf("Opção escolhida: %d\n", opcaoSessao);
                }
                else{
                    system("pause");
                    limparTela();
                    break;
                }

                verificaSessaoEReserva(opcaoFilme, opcaoSessao);

                system("pause");
                limparTela();
                break;
            case 2:
                limparTela();
                exibirMenuFechamento();

                pularLinha(1);

                printf("Escolha uma opção: ");
                scanf("%d", &opcaoFechamento);

                opcaoValida = validarFechamento(opcaoFechamento);

                if(opcaoValida == 1){
                    printf("Opção escolhida: %d\n", opcaoFechamento);
                }
                else{
                    system("pause");
                    limparTela();
                    break;
                }

                if(opcaoFechamento == 2){
                    resumoPagamentos();
                }


                system("pause");
                system("cls");
                break;
            case 3:
                limparTela();
                pularLinha(1);
                exibirValoresDeIngressos();

                pularLinha(2);

                printf("Retornando ao menu principal....\n");
                system("pause");

                limparTela();
                break;
            case 4:
                limparTela();
                exibirFilmesDisponiveis();
                pularLinha(1);

                printf("Selecione uma opção: ");
                scanf("%d", &opcaoFilme);

                opcaoValida = validarFilme(opcaoFilme);

                if(opcaoValida == 1){
                    printf("Opção escolhida: %d\n", opcaoFilme);
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
                    printf("Opção escolhida: %d\n", opcaoSessao);
                }
                else{
                    system("pause");
                    limparTela();
                    break;
                }

                desbloquearPoltronas(opcaoFilme, opcaoSessao);

                system("pause");
                limparTela();
                break;
        }
    }


}
