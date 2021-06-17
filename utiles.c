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
        list[index].vazio=1;
        acc=value[counter];
       list[index].matricula[counter] = acc;
       counter++;
    }
}

char getC(t_fichaVeiculo list[50], int index)
{
    int counter = 0;
    char acc;
    char registro[8];
    while (counter <51)
    {
        if (list[index].vazio !=0){
        acc = list[index].matricula[counter];
        strcat(registro,acc);
        }
        counter++;
    }
    printf("\n");
}
