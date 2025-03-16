#include "funcoes.h"

void cadastrarVeiculo(CARROS** c, unsigned int* quantidade){
    *c = (CARROS*)realloc(*c, (*quantidade + 1) * sizeof(CARROS));
    if(*c != NULL){
        printf("--CADASTRO DE VEICULO--\n");
        printf("Modelo: ");
        lbt();
        scanf("%[^\n]", &(*c)[*quantidade].modelo);
        printf("Ano: ");
        scanf("%d", &(*c)[*quantidade].ano);
        printf("Placa: ");
        lbt();
        scanf("%[^\n]", &(*c)[*quantidade].placa);
        printf("Valor diario de locacao: R$");
        scanf("%f", &(*c)[*quantidade].vLocacaoDiaria);
        printf("\n\n");
        (*quantidade)++;
    }else{
        printf("Erro. Memoria insuficiente!\n");
    }
    system("pause");
}