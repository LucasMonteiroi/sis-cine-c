#include "stdio.h"
#include "conio.h"
#include "locale.h"

/*
void pularLinha(int linhas){
        int i;
        for(i=0;i<linhas;i++)
        {
            printf("\n");
        }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    exibirValorIngressos();
    int qtdInt, qtdMeia, qtdGratis, totalIngresso, op;
    float meiaEntrada = 12.50, integral = 25.00, totalInt, totalMeia, totalCompra, vPago, troco;

    pularLinha(1);
    printf("Informe a quantidade de ingressos integrais: ");
    scanf("%d", &qtdInt);
    totalInt = qtdInt * integral;
    printf("Valor Total: R$ %f\n\n", totalInt);

    printf("Informe a quantidade de ingressos meia - entrada: ");
    scanf("%d", &qtdMeia);
    totalMeia = qtdMeia * meiaEntrada;
    printf("Valor Total: R$ %f\n\n", totalMeia);

    printf("Informe a quantidade de ingressos com gratuidade: ");
    scanf("%d", &qtdGratis);
    printf("Valor Total: R$ 0,00");

    pularLinha(2);

    totalIngresso = qtdInt + qtdMeia + qtdGratis;
    totalCompra = totalInt + totalMeia;
    printf("Quantidade de ingressos adquiridos: %d\n", totalIngresso);
    printf("Valor Total р Pagar: R$ %f\n\n", totalCompra);
    getch();
    system("cls");

    exibirFormasdePagamento();

    printf("Escoha uma opчуo: ");
    scanf("%d", &op);

    pularLinha(1);

    if(op == 1)
    {
        printf("Digite o valor recebido: R$");
        scanf("%f", &vPago);
        if(vPago > totalCompra)
        {
           troco = vPago - totalCompra;
           printf("Troco: R$ %f", troco);
        }
    }
}


*/
