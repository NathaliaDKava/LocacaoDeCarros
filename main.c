#include "funcoes.h"

int main(){
    CARROS *c = NULL;
    int op;
    unsigned int quantidade = 0;
    do{
        system("cls");
        printf("---MENU PRINCIPAL---\n");
        printf("1 - Cadastrar veiculo\n");
        printf("2 - Exibir veiculos cadastrados\n");
        printf("3 - Buscar por faixa de ano\n");
        printf("4 - Calcular valor total da locacao\n");
        printf("5 - Exibir carros por valor de locacao diaria\n");
        printf("6 - Sair do programa\n");
        printf("\n");
        printf("Digite sua opcao: \n");
        scanf("%d", &op);
        system("cls");
        switch(op){
            case 1:
                cadastrarVeiculo(&c, &quantidade);
                break;
            case 2:
                if(c != NULL){
                    exibirVeiculos(c, quantidade);
                }else{
                    printf("Nao ha veiculos cadastrados!\n");
                    system("pause");
                }
                break;
            case 3:
                if(c != NULL){
                    buscarFaixaAno(c, quantidade);
                }else{
                    printf("Nao ha veiculos cadastrados!\n");
                    system("pause");
                }
                break;
            case 4:
                if(c != NULL){
                    calcularValorLocacao(c, quantidade);
                }else{
                    printf("Nao ha veiculos cadastrados!\n");
                    system("pause");
                }
                break;
            case 5:
                if(c != NULL){
                    exibirPorValorLocacao(c, quantidade);
                }else{
                    printf("Nao ha veiculos cadastrados!\n");
                    system("pause");
                }
                break;
            case 6:
                printf("Encerrando programa...\n");
                break;
            default:
                printf("Erro. Informe uma opcao valida.\n");
                system("pause");
        }
    }while(op != 6);
}