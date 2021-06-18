#ifndef UTILES_H_INCLUDED
#define UTILES_H_INCLUDED
typedef struct
{
    int dia[2], mes[2], ano[4];
}t_data;
     typedef struct{
    char matricula[8];
    int tipoVeiculo;
    char proprietario[100];
    t_data dataUltima;
    int resultado;
}t_fichaVeiculo;

int vazio;
int indice_global;
t_fichaVeiculo listaVeiculos[50];


void setC(char value[8]);
char getC(int index);
void printC(int index);
int encontraMatricula(char matricula[8]);


#endif // UTILES_H_INCLUDED
