#include "stdio.h"
#include "conio.h"
#include "locale.h"
#include "menus.c"
#include "auxiliar.c"

int main()
{
    // Inserindo a Localidade para mostrar acentuação e unidades monetárias
    setlocale(LC_ALL, "Portuguese");

    int opcaoMenu, opcaoFilme;


    exibirBoasVindas();
    pularLinha();
    
    exibirMenuPrincipal();
    pularLinha();

}
