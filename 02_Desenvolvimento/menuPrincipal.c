#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int op=0;

    while(op!=3)
    {
        system("cls");
        printf("|-----------------------------------------------------------------|");
        printf("\n|              Cinema para Todos, Bem vindo!                      |\n");
        printf("|-----------------------------------------------------------------|\n\n");
        printf("1 - Escolha de Filmes\n");
        printf("2 - Fechamento de Caixa\n");
        printf("3 - Sair\n\n");
        printf("Escolha uma das opções acima: ");
        scanf("%d", &op);
        getch();
    }
}
