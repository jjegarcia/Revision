#include <stdio.h>
#include <string.h>
#include "utiles.h"

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

/*
char getC(int index)
{
    int counter = 0;
    char acc='a';
    char registro[8];
    while (counter <51)
    {
        if (vazio !=0){
        acc = listaVeiculos[index].matricula[counter];
        strcat(registro,acc);
        §§
        counter++;
    }
    printf("\n");
}
*/
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

