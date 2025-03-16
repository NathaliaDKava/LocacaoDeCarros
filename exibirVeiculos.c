#include "funcoes.h"

void exibirVeiculos(CARROS *c, int quantidade){
    printf("--EXIBIR VEICULOS--\n");
    for(int ind = 0; ind < quantidade; ind++){
        printf("\n");
        printf("--- VEICULO %d ---\n", ind + 1);
        printf("Modelo: %s\n", c[ind].modelo);
        printf("Ano: %d\n", c[ind].ano);
        printf("Placa: %s\n", c[ind].placa);
        printf("Valor diario de locacao: R$%.2f\n", c[ind].vLocacaoDiaria);
    }
    printf("\n\n");
    system("pause");
}