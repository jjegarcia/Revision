#include <stdio.h>
#include <string.h>
#include "utiles.h"



int main(int argc, char const *argv[])
{
    char t[9];

    printf("enter a string:");
    scanf("%s", t);
    strcat(t,";");

    setC(t, 0, lista);

    printf("saved:");
    printC(lista, 0);

    return 0;
}

void printC(t_fichaVeiculo list[10], int index)
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

void setC(char value[9], int index, t_fichaVeiculo list[10])
{
    int counter = 0;
    char acc;
    while (value[counter] != ';')
    {
        acc=value[counter];
       list[index].matricula[counter] = acc;
       counter++;
    }
}

char *getC(t_fichaVeiculo list[10], int index)
{
    int counter = 0;
    char *value[9];
    do
    {
        *value += list[index].matricula[counter];
        counter++;
    } while (list[index].matricula[counter] == ';');

    return *value;
}

