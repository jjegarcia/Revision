#ifndef REGISTARIPO_H_INCLUDED
#define REGISTARIPO_H_INCLUDED

typedef struct
{
    int hora, minuto, duracao, resultado;
    float custo;
    char anot [200];
}t_reg;

void registarnovaIPO();
void horarioIPO();
void duracaoIPO();
void resultadoIPO();
void anotacoesIPO();
void custoIPO();
int nregistoIPO;
t_reg registo[300];
int indice_global;






















#endif // REGISTARIPO_H_INCLUDED
