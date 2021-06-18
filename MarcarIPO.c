#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
#include <Windows.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include "main.h"
#include "MarcarIPO.h"

void marcarNovaIPO()
{
    int matricula_indice=-1;
    marcarData();
    matricula_indice=marcarMatricula();
    marcarTipo();
    marcarIPO();
}
void marcarData ()
{
    printf("\nInsira a data da marcação:");
    scanf("%2d%2d%4d",novoIPORegistro.novaData.dia,
           novoIPORegistro.novaData.mes,
           novoIPORegistro.novaData.ano);
}
int marcarMatricula ()
{
    int resposta=-1;
    int valido=1;
    fflush(stdin);
    while(valido==1)
    {
    printf("\nInsira a matricula:");
    scanf ("%s",&novoIPORegistro.mMatricula);
    resposta=encontraMatricula(novoIPORegistro.mMatricula);
    if (resposta==-1)
        {
            printf("\nMatrícula Inexistente");
         }
        else {
            valido=0;
        }
    }
}
void marcarTipo ()
{
    int t;
    do
    {
        printf("\nSelecione o tipo de inspeção:\n");
        printf("1.Periódica\t2.Reinspeção\t3.Nova Matr\t4.Extraordinária\t");
        scanf("%d", &t);
        if (t!=1&&t!=2&&t!=3&&t!=4)
            {
                printf("\nOpção Inválida");
            }
    }
    while (t!=1&&t!=2&&t!=3&&t!=4);
    novaMarcacao[indice].tipoIpo[0]=t;
}

void marcarIPO(){
    guardar(novaMarcacao[IPO_indice_global].novaData.mes,novoIPORegistro.novaData.mes);
    guardar(novaMarcacao[IPO_indice_global].novaData.ano,novoIPORegistro.novaData.ano);
    guardar(novaMarcacao[IPO_indice_global].novaData.dia,novoIPORegistro.novaData.dia);
    guardar(novaMarcacao[IPO_indice_global].mMatricula,novoIPORegistro.mMatricula);
    novaMarcacao[IPO_indice_global].tipoIpo=novoIPORegistro.tipoIpo;
    IPO_indice_global++;
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
