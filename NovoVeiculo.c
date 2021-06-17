#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
#include <Windows.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include "NovoVeiculo.h"
#include "MarcarIPO.h"
#include "utiles.h"

void pedirNovoVeiculo (int indice)
{
    pedirMatricula(indice);
    pedirtVeiculo(indice);
    pedirNome(indice);
    pedirDataIPO(indice);
}
void pedirMatricula(int indice)
{
    int respuesta;
    int valido=0;
   char matricula[8];

   //matricula_tipo matriculas[8];
fflush(stdin);
    while(valido==0)
    {
    printf("Matrícula:\t");
    scanf("%s",matricula);
    strcat(matricula,";");
    respuesta= encontraMatricula(matricula);
    if (respuesta!=1)
        {
            printf("Matrícula existente");
         }
        else {
            valido=1;
            setC(matricula,indice,listaVeiculos);
        }
    }
}

void pedirtVeiculo (int indice)
{
fflush(stdin);
int tipoVeiculo;
printf("Tipo de Veiculo:\n");
printf("1.Ligeiro\n2.Pesado\n3.Reboque\n4.Motociclo\n");
scanf("%d",&tipoVeiculo);
listaVeiculos[indice].tipoVeiculo[0]=tipoVeiculo;
}
void pedirNome(int indice)
{
fflush(stdin);
printf("\nNome do Proprietário:\t");
gets(listaVeiculos[indice] .proprietario);
}
void pedirDataIPO(int indice)
{
fflush(stdin);
printf("\nData última IPO:\t");
scanf("%2d%2d%4d",dataipo.dia, dataipo.mes, dataipo.ano);
}
