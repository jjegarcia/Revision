#ifndef MARCARIPO_H_INCLUDED
#define MARCARIPO_H_INCLUDED
#include "NovoVeiculo.h"
typedef struct
{
    t_data novaData;
    char mMatricula[8];
    int tipoIpo[1];
}t_MarcarIPO;

void marcarNovaIPO();
void marcarData();
void marcarMatricula();
void marcarTipo();
int encontraMatricula(char matricula[8]);
t_MarcarIPO novaMarcacao[10];
t_data dataMarc;
int matcomp;
t_fichaVeiculo matricula;
#endif // MARCARIPO_H_INCLUDED
