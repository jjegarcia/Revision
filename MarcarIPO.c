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
    setlocale(LC_ALL,"");
    int matricula_indice=-1;
    marcarData();
    matricula_indice=marcarMatricula();
    marcarTipo();
    marcarIPO();
}
void marcarData ()
{
    int resposta =-1;
    if (vazio_IPO !=0){
        do {
            printf("\nInsira a data da marcação DD-MM-AAAA:");
            scanf("%d",&novoIPORegistro.novaData.dia);
            scanf("%d",&novoIPORegistro.novaData.mes);
            scanf("%d",&novoIPORegistro.novaData.ano);
            contarData(novoIPORegistro.novaData);
        } while(resposta==-1);

    }
    else {
            printf("\nInsira a data da marcação:");
            scanf("%d",&novoIPORegistro.novaData.dia);
            scanf("%d",&novoIPORegistro.novaData.mes);
            scanf("%d",&novoIPORegistro.novaData.ano);
            vazio_IPO=1;
    }
}
int marcarMatricula ()
{
    int resposta=-1;
    int valido=1;
    fflush(stdin);
    while(valido==1)
    {
    printf("\nInsira a matricula:");
    scanf ("%s",novoIPORegistro.mMatricula);
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
        printf("1.Periódica\t2.Reinspeção\t3.Nova Matrícula\t4.Extraordinária\t");
        scanf("%d", &t);
        if (t!=1&&t!=2&&t!=3&&t!=4)
            {
                printf("\nOpção Inválida");
            }
    }
    while (t!=1&&t!=2&&t!=3&&t!=4);
    novaMarcacao[IPO_indice_global].tipoIpo=t;
    novaMarcacao[indice_global].tipoIpo=t;
}

void marcarIPO(){
    guardar(novaMarcacao[IPO_indice_global].novaData.mes,novoIPORegistro.novaData.mes);
    guardar(novaMarcacao[IPO_indice_global].novaData.ano,novoIPORegistro.novaData.ano);
    guardar(novaMarcacao[IPO_indice_global].novaData.dia,novoIPORegistro.novaData.dia);
    guardar(novaMarcacao[IPO_indice_global].mMatricula,novoIPORegistro.mMatricula);
    novaMarcacao[IPO_indice_global].tipoIpo=novoIPORegistro.tipoIpo;
    IPO_indice_global++;
}
