#include <stdio.h>
#include <string.h>
#include "utiles.h"
int MAX_CONTA=10;

void guardarString(char value[8])
{
    int counter = 0;
    char acc='&';
    while (counter <8)
    {
        acc=value[counter];
        listaVeiculos[indice_global].matricula[counter] = acc;
        counter++;
    }
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
    char acc='&';
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
        if (listaMarcacao[indice].novaData.ano==data.ano &&
            listaMarcacao[indice].novaData.dia==data.dia &&
            listaMarcacao[indice].novaData.mes==data.mes)
            {
                conta++;
            }
        indice++;
    }
    if (conta<MAX_CONTA){
        resposta=1;
    }
    return resposta;
}

int dia(){
    int valido=0;
    int dia=-1;
    while (valido==0){
        printf("\ndia:");
        scanf("%d",&dia);
        if (dia>0 && dia<32){
            valido=1;
        }
    }
    return dia;
}

int mes(){
    int valido=0;
    int mes=-1;
    while (valido==0){
        printf("\nmes:");
        scanf("%d",&mes);
        if (mes>0 && mes<12){
            valido=1;
        }
    }
    return mes;
}

int ano(){
    int valido=0;
    int ano=-1;
    while (valido==0){
            printf("\nano:");
        scanf("%d",&ano);
        if (ano>0 && ano<3000){
            valido=1;
        }
    }
    return ano;
}
int contarMatricula(char matricula[8])
{
    int conta=0;
    int indice=0;
    while (indice<IPO_indice_global)
    {
        if (strcmp(listaMarcacao[indice].mMatricula,matricula)==0)
            {
                conta++;
            }
        indice++;
    }

    return conta;
}
