#include <stdio.h>
#include <string.h>
#include "utiles.h"
int MAX_CONTA=10;
void printC(int index)
{
    int counter = 0;
    char acc;
    while (counter <9)
    {
        acc = listaVeiculos[index].matricula[counter];
        printf("%c", acc);
        counter++;
    }
    printf("\n");
}

void setC(char value[8])
{
    int counter = 0;
    char acc;
    while (counter <8)
    {
        acc=value[counter];
        listaVeiculos[indice_global].matricula[counter] = acc;
        counter++;
    }
    indice_global++;
}


int encontraMatricula(char matricula[8])
{
    int resposta=-1;
    int indice=0;
    while (indice<50 && resposta!=indice)
    {
        if (strcmp(listaVeiculos[indice].matricula,matricula)==0)
             {
                resposta=indice;
            }
            else{
                    indice++;
            }
    }
return resposta;
}

void guardar(char vector[],char dato[]){
    int counter = 0;
    char acc;
    while (counter <8)
    {
        acc=dato[counter];
        vector[counter] = acc;
        counter++;
    }
}

int contarData(t_data data)
{
    int resposta=-1;
    int conta=0;
    int indice=0;
    while (indice<IPO_indice_global)
    {
        if (novaMarcacao[indice].novaData.ano==data.ano &&
            novaMarcacao[indice].novaData.dia==data.dia &&
            novaMarcacao[indice].novaData.mes==data.mes)
            {
                conta++;
            }
    }
    if (conta<MAX_CONTA){
        resposta=1;
    }
    return resposta;
}

