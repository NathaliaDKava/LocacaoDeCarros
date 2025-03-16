#include "funcoes.h"

void buscarFaixaAno(CARROS *c, int quantidade){
    int anoMenor, anoMaior;
    printf("--BUSCA POR FAIXA DE ANO--\n");
    printf("Digite o menor ano da faixa: ");
    scanf("%d", &anoMenor);
    printf("Digite o maior ano da faixa: ");
    scanf("%d", &anoMaior);
    for(int ind = 0; ind < quantidade; ind++){
        if(c[ind].ano >= anoMenor && c[ind].ano <= anoMaior){
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