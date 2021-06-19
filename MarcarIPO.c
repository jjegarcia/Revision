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
    int resposta =-1;
    do {
        printf("\nInsira a data da marcação:");
        novoIPORegistro.novaData.dia=dia();
        novoIPORegistro.novaData.mes=mes();
        novoIPORegistro.novaData.ano=ano();
        resposta=contarData(novoIPORegistro.novaData);
    } while(resposta==-1);
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
    int valido=0;
    fflush(stdin);
    while (valido==0){
        printf("\nSelecione o tipo de inspeção:\n");
        printf("1.Periódica\t2.Reinspeção\t4.Extraordinária\t");
        scanf("%d", &novoIPORegistro.tipoIpo);
        if (novoIPORegistro.tipoIpo>0 && novoIPORegistro.tipoIpo<5){
            valido=1;
        }
    }
 }

void marcarIPO(){
    novaMarcacao[IPO_indice_global].novaData.mes=novoIPORegistro.novaData.dia;
    novaMarcacao[IPO_indice_global].novaData.ano=novoIPORegistro.novaData.ano;
    novaMarcacao[IPO_indice_global].novaData.dia=novoIPORegistro.novaData.dia;
    guardar(novaMarcacao[IPO_indice_global].mMatricula,novoIPORegistro.mMatricula);
    novaMarcacao[IPO_indice_global].tipoIpo=novoIPORegistro.tipoIpo;
    IPO_indice_global++;
}
