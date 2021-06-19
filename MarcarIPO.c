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
#include "main.h"
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
        printf("\nInsira a data da marcacao:");
        novoIPORegisto.novaData.dia=dia();
        novoIPORegisto.novaData.mes=mes();
        novoIPORegisto.novaData.ano=ano();
        resposta=contarData(novoIPORegisto.novaData);
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
    scanf ("%s",novoIPORegisto.mMatricula);
    resposta=encontraMatricula(novoIPORegisto.mMatricula);
    if (resposta==-1)
        {
            printf("\nMatricula Inexistente");
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
        printf("\nSelecione o tipo de inspecao:\n");
        printf("1.Periodica\t2.Reinspecao\t4.Extraordinaria\t");
        scanf("%d", &novoIPORegisto.tipoIpo);
        if (novoIPORegisto.tipoIpo>0 && novoIPORegisto.tipoIpo<5){
            valido=1;
        }
    }
 }

void marcarIPO(){
    novaMarcacao[IPO_indice_global].novaData.mes=novoIPORegisto.novaData.dia;
    novaMarcacao[IPO_indice_global].novaData.ano=novoIPORegisto.novaData.ano;
    novaMarcacao[IPO_indice_global].novaData.dia=novoIPORegisto.novaData.dia;
    guardar(novaMarcacao[IPO_indice_global].mMatricula,novoIPORegisto.mMatricula);
    novaMarcacao[IPO_indice_global].tipoIpo=novoIPORegisto.tipoIpo;
    IPO_indice_global++;
}
