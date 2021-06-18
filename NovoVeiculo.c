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
    pedirUltResultado();
}
void pedirMatricula()
{
    int resposta;
    int valido=0;
    char matricula[8];
    fflush(stdin);
    while(valido==0)
    {
    printf("Matr�cula:\t");
    scanf("%s",matricula);
    if (vazio !=0){
        resposta= encontraMatricula(matricula);
        if (resposta!=-1)
            {
                printf("Matr�cula existente");
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
     do
    {
        printf("Tipo de Veiculo:\n");
        printf("1.Ligeiro\n2.Pesado\n3.Reboque\n4.Motociclo\n");
        scanf("%d",&tipoVeiculo);
        if (tipoVeiculo!=1&&tipoVeiculo!=2&&tipoVeiculo!=3&&tipoVeiculo!=4)
            {
                printf("\nOp��o Inv�lida\n");
            }
    }
    while(tipoVeiculo!=1&&tipoVeiculo!=2&&tipoVeiculo!=3&&tipoVeiculo!=4);
    listaVeiculos[indice_global].tipoVeiculo=tipoVeiculo;
}
void pedirNome()
{
    fflush(stdin);
    printf("\nNome do Propriet�rio:\t");
    gets(listaVeiculos[indice_global] .proprietario);
}
void pedirDataIPO()
{
    fflush(stdin);
    printf("\nData �ltima IPO:\t");
    scanf("%d",&dataipo.dia);
    scanf("%d",&dataipo.mes);
    scanf("%d",&dataipo.ano);

}
void pedirUltResultado()
{
    fflush(stdin);
    int r;
    do
        {
            fflush(stdin);
            printf("\n Insira o resultado da �ltima IPO: \n1.Aprovado\n0.Reprovado\n");
            scanf("%d",&r);
            if (r!=1&&r!=0)
                {
                    printf("\nOp��o Inv�lida\n");
                }
        }
    while(r!=1&&r!=0);
listaVeiculos[indice_global].resultado=r;
}
