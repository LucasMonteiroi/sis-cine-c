#include "stdio.h"
#include "conio.h"
#include "locale.h"

void exibirBoasVindas(){
    printf("|-------------------------------------------|\n");
    printf("|                   Ol�                     |\n");
    printf("|            Cinema para Todos              |\n");
    printf("|               Bem vindo(a)                |\n");
    printf("|                                           |\n");
    printf("|___________________________________________|\n");
}

void exibirMenuPrincipal(){
    printf("|-------------------------------------------|\n");
    printf("|                                           |\n");
    printf("|   Menu Principal:                         |\n");
    printf("|   1 - Escolha de Filmes                   |\n");
    printf("|   2 - Fechamento do Caixa                 |\n");
    printf("|   3 - Sair                                |\n");
    printf("|                                           |\n");
    printf("|___________________________________________|\n");
}

void exibirFilmesDisponiveis(){
    printf("|-------------------------------------------|\n");
    printf("|                                           |\n");
    printf("|   Menu Principal:                         |\n");
    printf("|   1 - Batman                              |\n");
    printf("|   2 - Os Vingadores                       |\n");
    printf("|   3 - Homem de Ferro                      |\n");
    printf("|   4 - Superman                            |\n");
    printf("|                                           |\n");
    printf("|___________________________________________|\n");
}

void exibirMenuFechamento(){
    printf("|-------------------------------------------|\n");
    printf("|                                           |\n");
    printf("|   Fechamento do caixa:                    |\n");
    printf("|   1 - Ingressos Vendidos                  |\n");
    printf("|   2 - Resumo de Valores                   |\n");
    printf("|                                           |\n");
    printf("|___________________________________________|\n");
}

void exibirSessaoParaFilme(int opcaoFilme){

    if(opcaoFilme == 1){
        // Exibir Menu de Sessoes
        printf("|-------------------------------------------|\n");
        printf("|                                           |\n");
        printf("|   Filme Escolhido: Batman                 |\n");
        printf("|   Sess�es:                                |\n");
        printf("|   1 - 12:00                               |\n");
        printf("|   2 - 15:00                               |\n");
        printf("|   3 - 17:00                               |\n");
        printf("|                                           |\n");
        printf("|___________________________________________|\n");

    }
    else if(opcaoFilme == 2){
        printf("|-------------------------------------------|\n");
        printf("|                                           |\n");
        printf("|   Filme Escolhido: Os Vingadores          |\n");
        printf("|   Sess�es:                                |\n");
        printf("|   4 - 12:00                               |\n");
        printf("|   5 - 15:00                               |\n");
        printf("|   6 - 17:00                               |\n");
        printf("|                                           |\n");
        printf("|___________________________________________|\n");
    }
    else if(opcaoFilme == 3){
        printf("|-------------------------------------------|\n");
        printf("|                                           |\n");
        printf("|   Filme Escolhido: Homem de Ferro         |\n");
        printf("|   Sess�es:                                |\n");
        printf("|   7 - 12:00                               |\n");
        printf("|   8 - 15:00                               |\n");
        printf("|   9 - 17:00                               |\n");
        printf("|                                           |\n");
        printf("|___________________________________________|\n");
    }
    else if(opcaoFilme == 4){
        printf("|-------------------------------------------|\n");
        printf("|                                           |\n");
        printf("|   Filme Escolhido: Superman               |\n");
        printf("|   Sess�es:                                |\n");
        printf("|   10 - 12:00                               |\n");
        printf("|   11 - 15:00                               |\n");
        printf("|   12 - 17:00                               |\n");
        printf("|                                           |\n");
        printf("|___________________________________________|\n");
    }
    else {
        // Opcao invalida
        printf("Op��o Inv�lida! \n");
    }
}

int validaMenu(int opcaoMenu){
    if(opcaoMenu > 3)
    {
        printf("Op��o Inv�lida\n\n");
        return 0;
    }
    else{
        return 1;
    }
}

int validarFilme(int opcaoFilme){
    if(opcaoFilme > 4)
    {
        printf("Op��o Inv�lida! \n");
        return 0;
    }
    else{
        return 1;
    }
}

int validarSessao(int opcaoSessao, int opcaoFilme){
    int retorno;
    switch(opcaoFilme){
        case 1:
            if(opcaoSessao > 0 && opcaoSessao <= 3){
                retorno = 1;
            }
            else{
                retorno = 0;
            }
            break;
        case 2:
            if(opcaoSessao > 3 && opcaoSessao <= 6){
                retorno = 1;
            }
            else{
                retorno = 0;
            }
            break;
        case 3:
            if(opcaoSessao > 6 && opcaoSessao <= 9){
                retorno = 1;
            }
            else{
                retorno = 0;
            }
            break;
        case 4:
            if(opcaoSessao > 9 && opcaoSessao <= 12){
                retorno = 1;
            }
            else{
                retorno = 0;
            }
            break;
        default:
            retorno = 0;
            break;
    }

    if(retorno == 1){
        return retorno;
    }
    else{
        printf("Op��o Inv�lida! \n");
        return retorno;
    }
}
