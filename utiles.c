#include <stdio.h>
#include <string.h>
#include "utiles.h"

void printC(t_fichaVeiculo list[50], int index)
{
    int counter = 0;
    char acc;
    while (counter <9)
    {
        acc = list[index].matricula[counter];
        printf("%c", acc);
        counter++;
    }
    printf("\n");
}

void setC(char value[8], int index, t_fichaVeiculo list[50])
{
    int counter = 0;
    char acc;
    while (value[counter] != ';')
    {
        vazio=1;
        acc=value[counter];
       list[index].matricula[counter] = acc;
       counter++;
    }
}

char *getC(t_fichaVeiculo list[50], int index)
{
    int counter = 0;
    //char acc;
    char registro[8];
    strcpy(registro,"");

    while (counter <9)
    {
        //acc = list[index].matricula[counter];
        strcat(registro,list[index].matricula[counter]);
        counter++;
    }
    printf("pupu:  %s",registro);
    return registro;
}

int encontraMatricula(char matricula[8])
{
    int resposta=1;
    int indice;

    if (vazio==1){
         for (indice=0;indice<=49;++indice)
        {
            if (strcmp(getC(listaVeiculos, indice),matricula)==0)
                {
                    resposta=0;
                }
        }
    }
return resposta;
}

/*
char * getString(tipo list[50],int index){
    int counter=0;
    char value[8];
    strcpy(value,"");
    do
    {
        strcat(value,list[index].c[counter]);
    } while (list[index].c[counter]==';');

return value;
}
*/
