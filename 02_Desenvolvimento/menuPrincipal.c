#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int op=1, i, npoltrona, filme, sessao;
    int ss01[50], status1[50], ss02[50], status2[50], ss03[50], status3[50], ss04[50], status4[50],  ss05[50], status5[50], ss06[50], status6[50];
    int ss07[50], status7[50], ss08[50], status8[50], ss09[50], status9[50], ss10[50], status10[50],  ss11[50], status11[50], ss12[50], status12[50];

    for(i=0;i<50; i++)
    {
       status1[i] = 0;
       status2[i] = 0;
       status3[i] = 0;
       status4[i] = 0;
       status5[i] = 0;
       status6[i] = 0;
       status7[i] = 0;
       status8[i] = 0;
       status9[i] = 0;
       status10[i] = 0;
       status11[i] = 0;
       status12[i] = 0;
       ss01[i] = i+1;
       ss02[i] = i+1;
       ss03[i] = i+1;
       ss04[i] = i+1;
       ss05[i] = i+1;
       ss06[i] = i+1;
       ss07[i] = i+1;
       ss08[i] = i+1;
       ss09[i] = i+1;
       ss10[i] = i+1;
       ss11[i] = i+1;
       ss12[i] = i+1;
    }

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
        switch (op)
        {
            case 1:
            system("cls");
            printf("\n|--------------------------------------|\n");
            printf("|Opção escolhida: 1 - Escolha de Filmes|\n");
            printf("|--------------------------------------|\n\n");
            printf("Filmes Disponíveis:\n");
            printf("01 - Batman\n");
            printf("02 - Os Vingadores\n");
            printf("03 - Homem de ferro\n");
            printf("04 - Superman\n\n");
            printf("Escolha um dos filmes acima: ");
            scanf("%d", &filme);
            getch();
            if(filme == 1)
            {
                system("cls");
                printf("|-------------------------------|\n");
                printf("|Filme escolhido foi: 1 - Batman|\n");
                printf("|-------------------------------|\n");
                printf("Filme Disponível na Sala 01\n\n");
                printf("Sessões Disponíveis: \n");
                printf("1 - Sessão - 11h00\n");
                printf("2 - Sessão - 13h00\n");
                printf("3 - Sessão - 15h00\n");
                printf("Escolha uma das sessões: ");
                scanf("%d", &sessao);
                getch();
                if (sessao == 1)
                {
                        printf("Escolha a poltrona desejada: ");
                        scanf("%d", &npoltrona);
                        if(status1 [npoltrona-1] == 1)
                        {
                            printf("Poltrona ja reservada. Verique outra opção.");
                            getch();
                        }
                        else
                        {
                            for(i=0;i<50; i++)
                            {
                                if(npoltrona == ss01[i])
                                {
                                    status1[i] = 1;
                                    printf("Poltrona reservada com sucesso!");
                                    getch();
                                }
                            }
                        }
                }
                if (sessao == 2)
                {
                    printf("Escolha a poltrona desejada: ");
                    scanf("%d", &npoltrona);
                    if(status2 [npoltrona-1] == 1)
                    {
                        printf ("Poltrona ja reservada. Verique outra opção.");
                        getch();
                    }
                    else
                    {
                        for(i=0;i<50; i++)
                        {
                            if(npoltrona == ss02[i])
                            {
                                status2[i] = 1;
                                printf("Poltrona reservada com sucesso!");
                                getch();
                            }
                        }
                    }
                }
                if (sessao == 3)
                {
                        printf("Escolha a poltrona desejada: ");
                        scanf("%d", &npoltrona);
                        if(status3 [npoltrona-1] == 1)
                        {
                            printf ("Poltrona ja reservada. Verique outra opção.");
                            getch();
                        }
                        else
                        {
                            for(i=0;i<50; i++)
                            {
                                if(npoltrona == ss03[i])
                                {
                                    status3[i] = 1;
                                    printf("Poltrona reservada com sucesso!");
                                    getch();
                                }
                            }
                        }
                }
            }
            if(filme == 2)
            {
                system("cls");
                printf("|--------------------------------------|\n");
                printf("|Filme escolhido foi: 2 - Os Vingadores|\n");
                printf("|--------------------------------------|\n");
                printf("Filme Disponível na Sala 01\n\n");
                printf("Sessões Disponíveis: \n");
                printf("4 - Sessão - 17h00\n");
                printf("5 - Sessão - 19h00\n");
                printf("6 - Sessão - 21h00\n");
                printf("Escolha uma das sessões: ");
                scanf("%d", &sessao);
                getch();
                if (sessao == 4)
                {
                        printf("Escolha a poltrona desejada: ");
                        scanf("%d", &npoltrona);
                        if(status4 [npoltrona-1] == 1)
                        {
                            printf ("Poltrona ja reservada. Verique outra opção.");
                            getch();
                        }
                        else
                        {
                            for(i=0;i<50; i++)
                            {
                                if(npoltrona == ss04[i])
                                {
                                    status4[i] = 1;
                                    printf("Poltrona reservada com sucesso!");
                                    getch();
                                }
                            }
                        }
                }
                if (sessao == 5)
                {
                    printf("Escolha a poltrona desejada: ");
                    scanf("%d", &npoltrona);
                    if(status5 [npoltrona-1] == 1)
                    {
                        printf ("Poltrona ja reservada. Verique outra opção.");
                        getch();
                    }
                    else
                    {
                        for(i=0;i<50; i++)
                        {
                            if(npoltrona == ss05[i])
                            {
                                status5[i] = 1;
                                printf("Poltrona reservada com sucesso!");
                                getch();
                            }
                        }
                    }
                }
                if (sessao == 6)
                {
                    printf("Escolha a poltrona desejada: ");
                    scanf("%d", &npoltrona);
                    if(status6 [npoltrona-1] == 1)
                    {
                        printf ("Poltrona ja reservada. Verique outra opção.");
                        getch();
                    }
                    else
                    {
                        for(i=0;i<50; i++)
                        {
                            if(npoltrona == ss06[i])
                            {
                                status6[i] = 1;
                                printf("Poltrona reservada com sucesso!");
                                getch();
                            }
                        }
                    }
                }
            }
            if(filme == 3)
            {
                system("cls");
                printf("|---------------------------------------|\n");
                printf("|Filme escolhido foi: 3 - Homem de Ferro|\n");
                printf("|---------------------------------------|\n");
                printf("Filme Disponível na Sala 02\n\n");
                printf("Sessões Disponíveis: \n");
                printf("7 - Sessão - 11h00\n");
                printf("8 - Sessão - 13h00\n");
                printf("9 - Sessão - 15h00\n");
                printf("Escolha uma das sessões: ");
                scanf("%d", &sessao);
                getch();
                if (sessao == 7)
                {
                    printf("Escolha a poltrona desejada: ");
                    scanf("%d", &npoltrona);
                    if(status7 [npoltrona-1] == 1)
                    {
                        printf ("Poltrona ja reservada. Verique outra opção.");
                        getch();
                    }
                    else
                    {
                        for(i=0;i<50; i++)
                        {
                            if(npoltrona == ss07[i])
                            {
                                status7[i] = 1;
                                printf("Poltrona reservada com sucesso!");
                                getch();
                            }
                        }
                    }
                }
                if (sessao == 8)
                {
                    printf("Escolha a poltrona desejada: ");
                    scanf("%d", &npoltrona);
                    if(status8 [npoltrona-1] == 1)
                    {
                        printf ("Poltrona ja reservada. Verique outra opção.");
                        getch();
                    }
                    else
                    {
                        for(i=0;i<50; i++)
                        {
                            if(npoltrona == ss08[i])
                            {
                                status8[i] = 1;
                                printf("Poltrona reservada com sucesso!");
                                getch();
                            }
                        }
                    }
                }
                if (sessao == 9)
                {
                    printf("Escolha a poltrona desejada: ");
                    scanf("%d", &npoltrona);
                    if(status6 [npoltrona-1] == 1)
                    {
                        printf ("Poltrona ja reservada. Verique outra opção.");
                        getch();
                    }
                    else
                    {
                        for(i=0;i<50; i++)
                        {
                            if(npoltrona == ss09[i])
                            {
                                status9[i] = 1;
                                printf("Poltrona reservada com sucesso!");
                                getch();
                            }
                        }
                    }
                }
            }
            if(filme == 4)
            {
                system("cls");
                printf("|---------------------------------|\n");
                printf("|Filme escolhido foi: 4 - Superman|\n");
                printf("|---------------------------------|\n");
                printf("Filme Disponível na Sala 02\n\n");
                printf("Sessões Disponíveis: \n");
                printf("10 - Sessão - 17h00\n");
                printf("11 - Sessão - 19h00\n");
                printf("12 - Sessão - 121h00\n");
                printf("Escolha uma das sessões: ");
                scanf("%d", &sessao);
                getch();
                if (sessao == 10)
                {
                    printf("Escolha a poltrona desejada: ");
                    scanf("%d", &npoltrona);
                    if(status10 [npoltrona-1] == 1)
                    {
                        printf ("Poltrona ja reservada. Verique outra opção.");
                        getch();
                    }
                    else
                    {
                        for(i=0;i<50; i++)
                        {
                            if(npoltrona == ss10[i])
                            {
                                status10[i] = 1;
                                printf("Poltrona reservada com sucesso!");
                                getch();
                            }
                        }
                    }
                }
                if (sessao == 11)
                {
                    printf("Escolha a poltrona desejada: ");
                    scanf("%d", &npoltrona);
                    if(status11 [npoltrona-1] == 1)
                    {
                        printf ("Poltrona ja reservada. Verique outra opção.");
                        getch();
                    }
                    else
                    {
                        for(i=0;i<50; i++)
                        {
                            if(npoltrona == ss11[i])
                            {
                                status11[i] = 1;
                                printf("Poltrona reservada com sucesso!");
                                getch();
                            }
                        }
                    }
                }
                if (sessao == 12)
                {
                    printf("Escolha a poltrona desejada: ");
                    scanf("%d", &npoltrona);
                    if(status12 [npoltrona-1] == 1)
                    {
                        printf ("Poltrona ja reservada. Verique outra opção.");
                        getch();
                    }
                    else
                    {
                        for(i=0;i<50; i++)
                        {
                            if(npoltrona == ss12[i])
                            {
                                status12[i] = 1;
                                printf("Poltrona reservada com sucesso!");
                                getch();
                            }
                        }
                    }
                }
            }
        }//switch
    }//while
}//int main()


