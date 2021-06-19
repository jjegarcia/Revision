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
    matricula_indice=buscaMatricula();
    marcarTipo();
    marcarIPO();
}
void marcarData ()
{
    int resposta =-1;
    do {
        printf("\nInsira a data da marcacao:");
        novoRegistoIPO.novaData.dia=dia();
        novoRegistoIPO.novaData.mes=mes();
        novoRegistoIPO.novaData.ano=ano();
        resposta=contarData(novoRegistoIPO.novaData);
    } while(resposta==-1);
}
int buscaMatricula ()
{
    int resposta=-1;
    int valido=1;
    fflush(stdin);
    while(valido==1)
    {
    printf("\nInsira a matricula:");
    scanf ("%s",&novoRegistoIPO.mMatricula);
    resposta=encontraMatricula(novoRegistoIPO.mMatricula);
    if (resposta==-1)
        {
            printf("\nMatricula Inexistente");
         }
        else {
            valido=0;
        }
    }
    return resposta;
}

void marcarTipo ()
{
    int valido=0;
    fflush(stdin);
    while (valido==0){
        printf("\nSelecione o tipo de inspecao:\n");
        printf("1.Periodica\t2.Reinspecao\t4.Extraordinaria\t");
        scanf("%d", &novoRegistoIPO.tipoIpo);
        if (novoRegistoIPO.tipoIpo>0 && novoRegistoIPO.tipoIpo<5){
            valido=1;
        }
    }
 }

void marcarIPO(){
    listaMarcacao[IPO_indice_global].novaData.mes=novoRegistoIPO.novaData.dia;
    listaMarcacao[IPO_indice_global].novaData.ano=novoRegistoIPO.novaData.ano;
    listaMarcacao[IPO_indice_global].novaData.dia=novoRegistoIPO.novaData.dia;
    guardar(listaMarcacao[IPO_indice_global].mMatricula,novoRegistoIPO.mMatricula);
    listaMarcacao[IPO_indice_global].tipoIpo=novoRegistoIPO.tipoIpo;
    IPO_indice_global++;
}
