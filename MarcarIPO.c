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

    printf("\nInsira a data da marca��o:");
    scanf("%2d%2d%4d",dataMarc.dia, dataMarc.mes, dataMarc.ano);
}
void marcarMatricula (int indice)
{
    int resposta=-1;
    int valido=1;
    char novamatricula[8];
    fflush(stdin);
    while(valido==1)
    {
    printf("\nInsira a matricula:");
    scanf ("%s",novamatricula);
    resposta=encontraMatricula(novamatricula);
    if (resposta==-1)
        {
            printf("Matr�cula Inexistente");
         }
        else {
            valido=0;
        }
    }
}
void marcarTipo (int indice)
{

    int tipoIpo;
    printf("\nSelecione o tipo de inspe��o:\n");
    printf("1.Peri�dica\t2.Reinspe��o\t4.Extraordin�ria\t");
    scanf("%d", &tipoIpo);
    novaMarcacao[indice].tipoIpo[0]=tipoIpo;
}
