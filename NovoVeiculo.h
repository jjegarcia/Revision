#ifndef NOVOVEICULO_H_INCLUDED
#define NOVOVEICULO_H_INCLUDED
typedef struct
{
    int dia[2], mes[2], ano[4];
}t_data;

    typedef struct{
    char matricula[8];
    int tipoVeiculo[1];
    char proprietario[100];
    t_data dataUltima;
    int resultado[1];
}t_fichaVeiculo;

void pedirNovoVeiculo();
void pedirMatricula();
void pedirDataIPO();
void pedirNome();
void pedirtVeiculo();
t_fichaVeiculo listaVeiculos[50];
int indice;
t_data dataipo;
//struct char matricula_tipo[8];


#endif // NOVOVEICULO_H_INCLUDED

