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
        if(op == 1)
        {
            printf("\n|--------------------------------------|\n");
            printf("|Opção escolhida: 1 - Escolha de Filmes|\n");
            printf("|--------------------------------------|\n\n");
            printf("Filmes Disponíveis:\n");
            printf("1 - Batman\n");
            printf("2 - Os Vingadores\n");
            printf("3 - Homem de ferro\n\n");
            printf("Escolha um dos filmes acima: ");
            scanf("%d", &op);
            getch();

            if(op == 1)
            {
                printf("|-------------------------------|\n");
                printf("|Filme escolhido foi: 1 - Batman|\n");
                printf("|-------------------------------|\n");
                getch();
            }
            if(op == 2)
            {
                printf("|--------------------------------------|\n");
                printf("|Filme escolhido foi: 2 - Os Vingadores|\n");
                printf("|--------------------------------------|\n");
                getch();
            }
            if(op == 3)
            {
                printf("|---------------------------------------|\n");
                printf("|Filme escolhido foi: 3 - Homem de ferro|\n");
                printf("|---------------------------------------|\n");
                getch();
            }
        }
    }
}

