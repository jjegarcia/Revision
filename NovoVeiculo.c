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

void pedirNovoVeiculo ()
{
    pedirMatricula();
    pedirtVeiculo();
    pedirNome();
    pedirDataIPO();
    indice_global++;
}
void pedirMatricula()
{
    int resposta;
    int valido=0;
    char matricula[8];
    fflush(stdin);
    while(valido==0)
    {
    printf("Matrícula:\t");
    scanf("%s",matricula);
    if (vazio !=0){
        resposta= encontraMatricula(matricula);
        if (resposta!=-1)
            {
                printf("Matrícula existente");
            }
            else {
                    valido=1;
                    setC(matricula);
            }
        }
    else {
        vazio=1;
        valido=1;
        setC(matricula);
         }
    }
}

void pedirtVeiculo ()
{
    fflush(stdin);
    int tipoVeiculo;
    printf("Tipo de Veiculo:\n");
    printf("1.Ligeiro\n2.Pesado\n3.Reboque\n4.Motociclo\n");
    scanf("%d",&tipoVeiculo);
    listaVeiculos[indice_global].tipoVeiculo=tipoVeiculo;
}
void pedirNome()
{
    fflush(stdin);
    printf("\nNome do Proprietário:\t");
    gets(listaVeiculos[indice_global] .proprietario);
}
void pedirDataIPO()
{
    fflush(stdin);
    printf("\nData última IPO:\t");
    scanf("%2d%2d%4d",dataipo.dia, dataipo.mes, dataipo.ano);
}
