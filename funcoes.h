#ifndef funcoes_h
#define funcoes_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char modelo[51];
    char placa[11];
    int ano;
    float vLocacaoDiaria;
}CARROS;

#include "lbt.c"
#include "cadastrarVeiculo.c"
#include "exibirVeiculos.c"
#include "buscarFaixaAno.c"
#include "calcularValorLocacao.c"
#include "exibirPorValorLocacao.c"

#endif