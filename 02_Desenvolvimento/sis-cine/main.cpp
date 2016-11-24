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
    // Inserindo a Localidade para mostrar acentua��o e unidades monet�rias
    setlocale(LC_ALL, "Portuguese");

    int opcaoMenu, opcaoFilme, opcaoSessao, opcaoValida, opcaoFechamento;

    iniciarPoltronas();

    while(opcaoMenu != 3){
        exibirBoasVindas();
        pularLinha(1);
        exibirMenuPrincipal();
        pularLinha(1);

        printf("Escolha uma op��o: ");
        scanf("%d", &opcaoMenu);

        opcaoValida = validaMenu(opcaoMenu);

        if(opcaoValida == 1){
            printf("Op��o escolhida: %d", opcaoMenu);
        }
        else{
            system("pause");
            limparTela();
        }

        pularLinha(1);

        if(opcaoMenu == 3){
            printf("Voc� selecionou a op��o para sair do sistema.... At� logo!");
        }
        switch(opcaoMenu)
        {
            case 1:
                limparTela();
                exibirFilmesDisponiveis();
                pularLinha(1);

                printf("Selecione uma op��o: ");
                scanf("%d", &opcaoFilme);

                opcaoValida = validarFilme(opcaoFilme);

                if(opcaoValida == 1){
                    printf("Op��o escolhida: %d", opcaoFilme);
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

                printf("Escolha uma op��o: ");
                scanf("%d", &opcaoSessao);

                opcaoValida = validarSessao(opcaoSessao, opcaoFilme);

                if(opcaoValida == 1){
                    printf("Op��o escolhida: %d", opcaoSessao);
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

                printf("Escolha uma op��o: ");
                scanf("%d", &opcaoFechamento);

                system("pause");
                break;
        }
    }


}
