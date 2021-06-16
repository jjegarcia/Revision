#ifndef UTILES_H_INCLUDED
#define UTILES_H_INCLUDED
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

t_fichaVeiculo lista[10];


void setC(char value[9], int index, t_fichaVeiculo list[10]);
char *getC(t_fichaVeiculo list[10], int index);
void printC(t_fichaVeiculo list[10], int index);


#endif // UTILES_H_INCLUDED
