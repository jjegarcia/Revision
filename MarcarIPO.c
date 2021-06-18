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
    int IPO_indice=-1;
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
            printf("Matrícula Inexistente");
         }
        else {
            valido=0;
        }
    }
}
void marcarTipo ()
{
    int tipoIpo;
    printf("\nSelecione o tipo de inspeção:\n");
    printf("1.Periódica\t2.Reinspeção\t4.Extraordinária\t");
    scanf("%d", &novoIPORegistro.tipoIpo);
}

void marcarIPO(){
//   novaMarcacao[IPO_indice_global].mMatricula=novoIPORegistro.mMatricula;
//    novaMarcacao[IPO_indice_global].novaData.mes=dataMarc.mes;
    novaMarcacao[IPO_indice_global].tipoIpo=novoIPORegistro.tipoIpo;
    IPO_indice_global++;
}
