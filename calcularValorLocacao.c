#include "funcoes.h"

void calcularValorLocacao(CARROS *c, int quantidade){
    char m[51];
    int dias;
    printf("--MODELOS CADASTRADOS--\n");
    for(int ind = 0; ind < quantidade; ind++){
        printf(" - %s\n", c[ind].modelo);
    }
    printf("Digite um modelo: ");
    lbt();
    scanf("%[^\n]", &m);
    printf("Digite o numero de dias da locacao: ");
    scanf("%d", &dias);
    for(int ind = 0; ind < quantidade; ind++){
        if(strcmp(c[ind].modelo, m) == 0){
            printf("\nValor total da locacao: R$%.2f\n", dias * c[ind].vLocacaoDiaria);
            break;
        }
    }
    printf("\n\n");
    system("pause");
}