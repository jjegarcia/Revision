#ifndef MARCARIPO_H_INCLUDED
#define MARCARIPO_H_INCLUDED
#include "utiles.h"

typedef struct
{
    t_data novaData;
    char mMatricula[8];
    int tipoIpo;
}t_MarcarIPO;

t_MarcarIPO novoIPORegistro;
t_MarcarIPO novaMarcacao[10];
t_data dataMarc;
int matcomp;
t_fichaVeiculo matricula;
char novaMatricula[8];
int IPO_indice_global;

void marcarNovaIPO();
void marcarData();
int marcarMatricula();
void marcarTipo();
void marcarIPO();
#endif // MARCARIPO_H_INCLUDED
