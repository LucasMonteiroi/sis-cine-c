#include "stdio.h"
#include "conio.h"
#include "locale.h"

struct pagamentos{
    int cont;
    int qtdIngressos[100];
    float valorIngressos[100];
    float total;

};

struct pagamentos resumoPagamento;

void inicializarPagamento(){
    int i;

    resumoPagamento.cont = 0;
    resumoPagamento.total = 0;

    for(i=0;i<100;i++){
        resumoPagamento.qtdIngressos[i] = 0;
        resumoPagamento.valorIngressos[i] = 0;
    }
}

void resumoPagamentos(){
    int i;

    printf("|-------------------------------------------|\n");
    printf("|                                           |\n");
    printf("|   Resumo de Ingressos:                    |\n");
    printf("|   Qtd                         Valor(R$)   |\n");
    printf("|                                           |\n");

    for(i=0;i<100;i++){
        if(resumoPagamento.qtdIngressos[i] > 0){
            printf("|   %d                         R$ %2.f        |\n", resumoPagamento.qtdIngressos[i], resumoPagamento.valorIngressos[i]);
        }
    }

    printf("|                                           |\n");
    printf("|___________________________________________|\n\n\n");
}

void atualizarPagamentos(int qtdIngressos, float valorIngressos){
    int i;

    resumoPagamento.qtdIngressos[resumoPagamento.cont] = qtdIngressos;
    resumoPagamento.valorIngressos[resumoPagamento.cont] = valorIngressos;

    for(i=0;i<100;i++){
        resumoPagamento.total += resumoPagamento.valorIngressos[i];
    }

    resumoPagamento.cont +=1;
}

void exibirPagamentos(){
    printf("|-----------------------------------------------|\n");
    printf("|                                               |\n");
    printf("|      Formas de Pagamento:                     |\n");
    printf("|                                               |\n");
    printf("|  1 - Dinheiro                                 |\n");
    printf("|  2 - Débito                                   |\n");
    printf("|  3 - Crédito                                  |\n");
    printf("|                                               |\n");
    printf("|_______________________________________________|\n");
}


void exibirResumo(int qtdIngressos, int qtdMeia, int qtdInteira, int qtdVoucher, float totalCompra){
    printf("|-------------------------------------------|\n");
    printf("|                                           |\n");
    printf("|   Resumo da Compra:                       |\n");
    printf("|   Quantitdade de Inteiras: %d              |\n", qtdInteira);
    printf("|   Quantitdade de Meias: %d                 |\n", qtdMeia);
    printf("|   Quantitdade de Voucher: %d               |\n", qtdVoucher);
    printf("|   Total de Ingressos: %d                   |\n", qtdIngressos);
    printf("|                                           |\n");
    printf("|-------------------------------------------|\n");
    printf("|                                           |\n");
    printf("|   Total a pagar: %2.f                       |\n", totalCompra);
    printf("|___________________________________________|\n");
}

int pagamentoIngresso(int qtdIngressos)
{
    int qtdInt, qtdMeia, qtdGratis, totalIngresso, op;
    float meia, inteira, totalInt, totalMeia, totalCompra, vPago, troco;

    meia = 7,00;
    inteira = 14,00;
    qtdGratis = 0;
    qtdMeia = 0;
    qtdInt = 0;
    totalIngresso = qtdIngressos;
    totalCompra = 0;
    totalInt = 0;
    totalMeia = 0;

    printf("\nIngressos Selecionados: %d\n", qtdIngressos);

    while(totalIngresso != 0){
        printf("Informe a quantidade de ingressos integrais: ");
        scanf("%d", &qtdInt);
        totalIngresso -= qtdInt;

        totalInt = qtdInt * inteira;
        printf("Valor Inteira: R$ %2.f\n\n", totalInt);

        if(totalIngresso >= 1){
            printf("Informe a quantidade de ingressos meia - entrada: ");
            scanf("%d", &qtdMeia);

            totalIngresso -= qtdMeia;
            totalMeia = qtdMeia * meia;
            printf("Valor Meia: R$ %2.f\n\n", totalMeia);
        }

        if(totalIngresso >= 1){
            printf("Informe a quantidade de ingressos com gratuidade: ");
            scanf("%d", &qtdGratis);

            totalIngresso -= qtdGratis;
        }

        if(totalIngresso < 0){
            break;
        }

    }

    if(totalIngresso < 0){
        printf("\nQuantidade de Ingressos não batem com Ingressos selecionados!");
        printf("\nRefaça a Compra!\n");
        system("pause");
        return 0;
    }

    totalCompra = totalInt + totalMeia;

    system("cls");

    exibirResumo(qtdIngressos, qtdMeia, qtdInt, qtdGratis, totalCompra);

    printf("\n\n\n");

    exibirPagamentos();

    printf("Escoha uma opção: ");
    scanf("%d", &op);

    switch(op){
        int opcaoCartao;
        opcaoCartao = 0;
        float vRestante;

        case 1:
            printf("Digite o valor recebido: R$");
            scanf("%f", &vPago);

            if(vPago > totalCompra)
            {
               troco = vPago - totalCompra;
               printf("Troco: R$ %f", troco);
            }
            else if(vPago < totalCompra)
            {
                vRestante = totalCompra - vPago;
                printf("\nValor insuficiente, restam: R$ %2.f\n", vRestante);

                printf("\nDigite o valor recebido: R$ ");
                scanf("%f", &vPago);

                if(vPago >= vRestante){
                    troco = vPago - vRestante;
                    printf("\nTroco: R$ %2.f\n", troco);
                }
                else{
                    printf("\nValor insuficiente, realize uma nova compra!");
                    return 0;
                }

                return 1;
            }

            atualizarPagamentos(qtdIngressos, totalCompra);

            break;
        case 2:
            while(opcaoCartao != 1){
                printf("\n\nInsira o cartão.");
                printf("\nCartão Inserido? \n");
                printf("1 - Sim | 0 - Não : ");
                scanf("%d", &opcaoCartao);

                if(opcaoCartao > 1){
                    printf("\nOpção Inválida\n");
                }

                if (opcaoCartao == 1){
                    printf("\nCompra Aprovada!\n");
                    printf("Retire o Cartão!\n");
                    atualizarPagamentos(qtdIngressos, totalCompra);
                    return 1;
                }
                else{
                    printf("\nÉ necessário inserir o cartão!\n\n");
                }
            }
            break;
        case 3:
            while(opcaoCartao != 1){
                printf("\n\nInsira o cartão.");
                printf("\nCartão Inserido? \n");
                printf("1 - Sim | 0 - Não : ");
                scanf("%d", opcaoCartao);

                if(opcaoCartao < 0 || opcaoCartao > 1){
                    printf("\nOpção Inválida\n");
                }
                else if (opcaoCartao == 1){
                    printf("\nCompra Aprovada!\n");
                    printf("Retire o Cartão!\n");
                    atualizarPagamentos(qtdIngressos, totalCompra);

                    return 1;
                }
                else{
                    printf("\nÉ necessário inserir o cartão!\n\n");
                }
            }
            break;
    }
}


struct sessao{
    int fileiras[10];
    int poltronas[15];
    int statusPoltrona[15];
};

struct tipoIngresso{
    int voucher;
    int inteiro;
    int meia;
};

struct tipoIngresso tipo;
struct tipoIngresso tipoReserva;

struct sessao ses1;
struct sessao ses2;
struct sessao ses3;
struct sessao ses4;
struct sessao ses5;
struct sessao ses6;
struct sessao ses7;
struct sessao ses8;
struct sessao ses9;
struct sessao ses10;
struct sessao ses11;
struct sessao ses12;

struct sessao sessaoReserva;
struct sessao sessaoPoltronas;

void liberarPoltronas(){
    int i;
    for(i=0;i<=15;i++)
    {
        ses1.statusPoltrona[i] = 0;
        ses2.statusPoltrona[i] = 0;;
        ses3.statusPoltrona[i] = 0;;
        ses4.statusPoltrona[i] = 0;;
        ses5.statusPoltrona[i] = 0;;
        ses6.statusPoltrona[i] = 0;;
        ses7.statusPoltrona[i] = 0;;
        ses8.statusPoltrona[i] = 0;;
        ses9.statusPoltrona[i] = 0;;
        ses10.statusPoltrona[i] = 0;;
        ses11.statusPoltrona[i] = 0;;
        ses12.statusPoltrona[i] = 0;;
    }
}

void mapearAssentos(struct sessao ses){
    int contador, i;
    contador = 0;

        for(i=0;i<10;i++){
        contador += 1;
        ses.fileiras[i] = contador;
        }

        contador = 0;
        for(i=0;i<15;i++)
        {
            contador += 1;
            ses.poltronas[i] = contador;
        }

    sessaoReserva = ses;
}

void reservarAssento(int opcaoFilme, int opcaoSessao, struct sessao ses){

    int fileiras[10];
    int poltronas[15];
    int contador, i, j, fileira, lugar, opcao, qtdIngresso;
    contador = 0;
    opcao = 1;

    qtdIngresso = 0;

    mapearAssentos(ses);

    while(opcao != 0){
        ses = sessaoReserva;
        //ses = sessaoPoltronas;

        for(i=0;i<10;i++){
                if(i == 9){
                    printf("\nFileira %d : | ", ses.fileiras[i]);
                }
                else{
                    printf("\nFileira  %d : | ", ses.fileiras[i]);
                }

            for(j=0;j<15;j++){
                printf("%d | ", ses. poltronas[j]);

            }
        }

        printf("\n");

        printf("\nSelecione a fileira: ");
        scanf("%d", &fileira);

        if(fileira <= 10){
            printf("Selecione a poltrona: ");
            scanf("%d", &lugar);

            if(lugar <= 15)
            {
                for(i=0;i<10;i++){
                    if(ses.fileiras[i] == fileira){
                        for(j=0;j<15;j++){
                                if(lugar == ses.poltronas[j]){
                                    if(ses.statusPoltrona[j] == 0){
                                        ses.statusPoltrona[j] = 1;

                                        qtdIngresso += 1;

                                        printf("\nFileira Selecionada: %d", ses.fileiras[i]);
                                        printf("\nPoltrona Selecionada: %d\n", ses.poltronas[j]);

                                    }
                                    else{
                                        printf("Poltrona já reservada!\n");
                                    }
                            }
                        }
                    }
                }
            }
            else{
                printf("Poltrona Inválida!\n");
            }
        }
        else{
            printf("Fileira Inválida!\n");
        }

        sessaoReserva = ses;

        int retorno;

        printf("\n Deseja selecionar mais alguma poltrona?");
        printf(" \n 1 - Sim | 0 - Não: ");
        scanf("%d", &opcao);

        if(opcao < 0 || opcao > 1){
            printf("\nOpção Inválida!\n");
            break;
        }
        else if(opcao == 0){
            retorno = pagamentoIngresso(qtdIngresso);

            if(retorno == 0){
                printf("\nA compra não foi efetuada!\n");
                printf("\nLiberando todos as poltronas...\n");
                liberarPoltronas();
            }

            system("pause");
        }
    }


}


void liberarAssento(int opcaoFilme, int opcaoSessao, struct sessao ses){

    int fileiras[10];
    int poltronas[15];
    int contador, i, j, fileira, lugar;
    contador = 0;

    mapearAssentos(ses);

    ses = sessaoReserva;

    for(i=0;i<10;i++){
            if(i == 9){
                printf("\nFileira %d : | ", ses.fileiras[i]);
            }
            else{
                printf("\nFileira  %d : | ", ses.fileiras[i]);
            }

        for(j=0;j<15;j++){
            printf("%d | ", ses. poltronas[j]);

        }
    }

    printf("\n");

    printf("\nSelecione a fileira: ");
    scanf("%d", &fileira);

    if(fileira <= 10){
        printf("Selecione a poltrona: ");
        scanf("%d", &lugar);

        if(lugar <= 15)
        {
            for(i=0;i<10;i++){
                if(ses.fileiras[i] == fileira){
                    for(j=0;j<15;j++){
                            if(lugar == ses.poltronas[j]){
                                if(ses.statusPoltrona[j] == 1){
                                    ses.statusPoltrona[j] = 0;

                                    printf("\nPoltrona Liberada!!!\n");

                                }
                                else{
                                    printf("Poltrona já liberada!\n");
                                }
                        }
                    }
                }
            }
        }
        else{
            printf("Poltrona Inválida!\n");
        }
    }
    else{
        printf("Fileira Inválida!\n");
    }

    sessaoReserva = ses;

}


void verificaSessaoEReserva(int opcaoFilme, int opcaoSessao){
    switch(opcaoSessao){
        case 1:
            reservarAssento(opcaoFilme, opcaoSessao, ses1);
            ses1 = sessaoReserva;
            break;
        case 2:
            reservarAssento(opcaoFilme, opcaoSessao, ses2);
            ses2 = sessaoReserva;
            break;
        case 3:
            reservarAssento(opcaoFilme, opcaoSessao, ses3);
            ses3 = sessaoReserva;
            break;
        case 4:
            reservarAssento(opcaoFilme, opcaoSessao, ses4);
            ses4 = sessaoReserva;
            break;
        case 5:
            reservarAssento(opcaoFilme, opcaoSessao, ses5);
            ses5 = sessaoReserva;
            break;
        case 6:
            reservarAssento(opcaoFilme, opcaoSessao, ses6);
            ses6 = sessaoReserva;
            break;
        case 7:
            reservarAssento(opcaoFilme, opcaoSessao, ses7);
            ses7 = sessaoReserva;
            break;
        case 8:
            reservarAssento(opcaoFilme, opcaoSessao, ses8);
            ses8 = sessaoReserva;
            break;
        case 9:
            reservarAssento(opcaoFilme, opcaoSessao, ses9);
            ses9 = sessaoReserva;
            break;
        case 10:
            reservarAssento(opcaoFilme, opcaoSessao, ses10);
            ses10 = sessaoReserva;
            break;
        case 11:
            reservarAssento(opcaoFilme, opcaoSessao, ses11);
            ses11 = sessaoReserva;
            break;
        case 12:
            reservarAssento(opcaoFilme, opcaoSessao, ses12);
            ses12 = sessaoReserva;
            break;
    }
}

void desbloquearPoltronas(int opcaoFilme, int opcaoSessao){
    switch(opcaoSessao){
        case 1:
            liberarAssento(opcaoFilme, opcaoSessao, ses1);
            ses1 = sessaoReserva;
            break;
        case 2:
            liberarAssento(opcaoFilme, opcaoSessao, ses2);
            ses2 = sessaoReserva;
            break;
        case 3:
            liberarAssento(opcaoFilme, opcaoSessao, ses3);
            ses3 = sessaoReserva;
            break;
        case 4:
            liberarAssento(opcaoFilme, opcaoSessao, ses4);
            ses4 = sessaoReserva;
            break;
        case 5:
            liberarAssento(opcaoFilme, opcaoSessao, ses5);
            ses5 = sessaoReserva;
            break;
        case 6:
            liberarAssento(opcaoFilme, opcaoSessao, ses6);
            ses6 = sessaoReserva;
            break;
        case 7:
            liberarAssento(opcaoFilme, opcaoSessao, ses7);
            ses7 = sessaoReserva;
            break;
        case 8:
            liberarAssento(opcaoFilme, opcaoSessao, ses8);
            ses8 = sessaoReserva;
            break;
        case 9:
            liberarAssento(opcaoFilme, opcaoSessao, ses9);
            ses9 = sessaoReserva;
            break;
        case 10:
            liberarAssento(opcaoFilme, opcaoSessao, ses10);
            ses10 = sessaoReserva;
            break;
        case 11:
            liberarAssento(opcaoFilme, opcaoSessao, ses11);
            ses11 = sessaoReserva;
            break;
        case 12:
            liberarAssento(opcaoFilme, opcaoSessao, ses12);
            ses12 = sessaoReserva;
            break;
    }
}

