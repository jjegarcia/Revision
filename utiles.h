#ifndef UTILES_H_INCLUDED
#define UTILES_H_INCLUDED
typedef struct
{
    int dia, mes, ano;
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

typedef struct
{
    t_data novaData;
    char mMatricula[8];
    int tipoIpo;
}t_MarcarIPO;

t_MarcarIPO novoIPORegistro;
t_MarcarIPO novaMarcacao[300];
t_data dataMarc;
int matcomp;
t_fichaVeiculo matricula;
char novaMatricula[8];
int IPO_indice_global;


void setC(char value[8]);
char getC(int index);
void printC(int index);
int encontraMatricula(char matricula[8]);
void guardar(char vector[],char dato[]);
int contarData(t_data data);
int dia();
int mes();
int ano();
#endif // UTILES_H_INCLUDED
