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
    }
    else if(opcaoFilme == 2){

    }
    else if(opcaoFilme == 3){

    }
    else if(opcaoFilme == 4){

    }
    else {
        // Opcao invalida
    }
}

bool validarFilme(int opcaoFilme){
    if(opcaoFilme > 4)
    {
        // Opcao Invalida
    }
    else{
        // Opcao Valida
    }
}

bool validarSessao(int opcaoSessao){
    if(opcaoSessao > 4)
    {
        // Opcao Invalida
    }
    else{
        // Opcao Valida
    }
}