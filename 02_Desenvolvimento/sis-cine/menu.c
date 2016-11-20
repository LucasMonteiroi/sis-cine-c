#include "stdio.h"
#include "conio.h"
#include "locale.h"

void exibirBoasVindas(){
    printf("|-------------------------------------------|\n");
    printf("|                   Olá                     |\n");
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
        printf("|   Filme Escolhido: Os Vingadores          |\n");
        printf("|   Sessões:                                |\n");
        printf("|   1 - 12:00                               |\n");
        printf("|   2 - 15:00                               |\n");
        printf("|   3 - 17:00                               |\n");
        printf("|                                           |\n");
        printf("|___________________________________________|\n");

    }
    else if(opcaoFilme == 2){
        printf("|-------------------------------------------|\n");
        printf("|                                           |\n");
        printf("|   Filme Escolhido: Batman                 |\n");
        printf("|   Sessões:                                |\n");
        printf("|   1 - 12:00                               |\n");
        printf("|   2 - 15:00                               |\n");
        printf("|   3 - 17:00                               |\n");
        printf("|                                           |\n");
        printf("|___________________________________________|\n");
    }
    else if(opcaoFilme == 3){
        printf("|-------------------------------------------|\n");
        printf("|                                           |\n");
        printf("|   Filme Escolhido: Homem de Ferro         |\n");
        printf("|   Sessões:                                |\n");
        printf("|   1 - 12:00                               |\n");
        printf("|   2 - 15:00                               |\n");
        printf("|   3 - 17:00                               |\n");
        printf("|                                           |\n");
        printf("|___________________________________________|\n");
    }
    else if(opcaoFilme == 4){
        printf("|-------------------------------------------|\n");
        printf("|                                           |\n");
        printf("|   Filme Escolhido: Superman               |\n");
        printf("|   Sessões:                                |\n");
        printf("|   1 - 12:00                               |\n");
        printf("|   2 - 15:00                               |\n");
        printf("|   3 - 17:00                               |\n");
        printf("|                                           |\n");
        printf("|___________________________________________|\n");
    }
    else {
        // Opcao invalida
        printf("Opção Inválida");
    }
}

int validaMenu(int opcaoMenu){
    if(opcaoMenu > 3)
    {
        printf("Opção Inválida\n\n");
        return 0;
    }
    else{
        return 1;
    }
}

int validarFilme(int opcaoFilme){
    if(opcaoFilme > 4)
    {
        printf("Opção Inválida");
        return 0;
    }
    else{
        return 1;
    }
}

int validarSessao(int opcaoSessao){
    if(opcaoSessao > 4)
    {
        printf("Opção Inválida");
        return 0;
    }
    else{
        // Opcao Valida
        return 1;
    }
}
