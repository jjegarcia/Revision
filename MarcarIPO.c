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

void marcarNovaIPO(int indice)
{
  marcarData(indice);
  marcarMatricula(indice);
  marcarTipo(indice);
}
void marcarData (int indice)
{

    printf("\nInsira a data da marcação:");
    scanf("%2d%2d%4d",dataMarc.dia, dataMarc.mes, dataMarc.ano);
}
void marcarMatricula (int indice)
{
    int respuesta=33;
    int valido=1;
    char novamatricula[8];
    fflush(stdin);
    while(valido==1)
    {
    printf("\nInsira a matricula:");
    scanf ("%s",novamatricula);
    respuesta=encontraMatricula(novamatricula);
    if (respuesta!=0)
        {
            printf("Matrícula Inexistente");
         }
        else {
            valido=0;
        }
    }
}
void marcarTipo (int indice)
{

    int tipoIpo;
    printf("\nSelecione o tipo de inspeção:\n");
    printf("1.Periódica\t2.Reinspeção\t4.Extraordinária\t");
    scanf("%d", &tipoIpo);
    novaMarcacao[indice].tipoIpo[0]=tipoIpo;
}

int encontraMatricula(char matricula[8])
{
    int resposta=1;
    int indice;
    for (indice=0;indice<=49;++indice)
    {
        if (strcmp(listaVeiculos[indice].matricula,matricula)==0)
            {
                resposta=0;
            }
    }
return resposta;
}
