#include "funcoes.h"

void exibirPorValorLocacao(CARROS *c, int quantidade){
    float v;
    printf("--EXIBIR VEICULOS POR VALOR DIARIO DE LOCACAO--\n");
    printf("Digite um valor: R$");
    scanf("%f", &v);
    for(int ind = 0; ind < quantidade; ind++){
        if(c[ind].vLocacaoDiaria > v){
            printf("\n");
            printf("--- VEICULO %d ---\n", ind + 1);
            printf("Modelo: %s\n", c[ind].modelo);
            printf("Ano: %d\n", c[ind].ano);
            printf("Placa: %s\n", c[ind].placa);
            printf("Valor diario de locacao: R$%.2f\n", c[ind].vLocacaoDiaria);
        }
    }
    printf("\n\n");
    system("pause");
}