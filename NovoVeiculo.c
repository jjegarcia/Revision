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

void pedirNovoVeiculo (int indice)
{
    pedirMatricula(indice);
    pedirtVeiculo(indice);
    pedirNome(indice);
    pedirDataIPO(indice);
}
void pedirMatricula(int indice)
{
fflush(stdin);
printf("Matrícula:\t");
gets(listaVeiculos[indice] .matricula);
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
