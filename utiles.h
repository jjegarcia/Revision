#ifndef UTILES_H_INCLUDED
#define UTILES_H_INCLUDED
typedef struct
{
    int dia[2], mes[2], ano[4];
}t_data;

    typedef struct{
    int vazio;
    char matricula[8];
    int tipoVeiculo[1];
    char proprietario[100];
    t_data dataUltima;
    int resultado[1];
}t_fichaVeiculo;

t_fichaVeiculo lista[50];


void setC(char value[8], int index, t_fichaVeiculo list[50]);
char getC(t_fichaVeiculo list[50], int index);
void printC(t_fichaVeiculo list[50], int index);


#endif // UTILES_H_INCLUDED
