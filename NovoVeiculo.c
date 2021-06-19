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
    int valido=0;
    fflush(stdin);
    int tipoVeiculo;

    while (valido==0){
    printf("Tipo de Veiculo:\n");
    printf("1.Ligeiro\n2.Pesado\n3.Reboque\n4.Motociclo\n");
    scanf("%d",&tipoVeiculo);
        if (tipoVeiculo>0 && tipoVeiculo<5){
            valido=1;
        }
    }
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
    listaVeiculos[indice_global].dataUltima.dia= dia();
    listaVeiculos[indice_global].dataUltima.mes=mes();
    listaVeiculos[indice_global].dataUltima.ano=ano();
}
void pedirUltResultado()
{
    fflush(stdin);
    int r;
    do
        {
            fflush(stdin);
            printf("\n Insira o resultado da última IPO: \n1.Aprovado\n0.Reprovado\n");
            scanf("%d",&r);
            if (r!=1&&r!=0)
                {
                    printf("\nOpção Inválida\n");
                }
        }
    while(r!=1&&r!=0);
listaVeiculos[indice_global].resultado=r;
}
