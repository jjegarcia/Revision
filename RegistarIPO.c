#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
#include <Windows.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include "RegistarIPO.h"

void registarnovaIPO(int indice_global)
{
    horarioIPO(indice_global);
    duracaoIPO(indice_global);
    resultadoIPO(indice_global);
    anotacoesIPO(indice_global);
    custoIPO(indice_global);
}

void horarioIPO ()
{
    int h, m;
    printf("\nInsira a horário da IPO:");
    printf("\nHora:");
    scanf("%2d",&h);
    printf("\nMinutos:");
    scanf("%2d",&m);
h=registo[indice_global].hora;
m=registo[indice_global].minuto;
}
void duracaoIPO ()
{
    int d;
    printf("\nDuração da inspeção:\n");
    scanf("%2d",&d);
    printf("minutos");
d=registo[indice_global].duracao;
}

void resultadoIPO ()
{
    int a;
    fflush(stdin);
    do {
        printf("\nSelecione o resultado da IPO:\n1.Aprovado\n0.Reprovado\n");
        scanf("%d",&a);
        if (a!=1&&a!=0)
        {
            printf("\nOpção Inválida\n");

        }
    }
    while (a!=1&&a!=0);
registo[indice_global].resultado=a;
}

void anotacoesIPO ()
{
    fflush(stdin);
    printf("\nInsira anotacoes:\n");
    gets(registo[indice_global].anot);
}

void custoIPO (int indice)
{
    float c;
    fflush(stdin);
    do{
        printf("\nCusto da IPO:\n1.Inspeção\n2.Reinspeção\n3.Nova matricula\n4.Extraordinaria\n");
        scanf("%f",&c);
        if (c!=1&&c!=2&&c!=3&&c!=4)
        {
            printf("\nOpção Inválida\n");
        }
    }
    while (c!=1&&c!=2&&c!=3&&c!=4);
    for (c=1;registo[indice_global].custo==31.49;);
    for (c=2;registo[indice_global].custo==7.9;);
    for (c=3;registo[indice_global].custo==78.6;);
    for (c=4;registo[indice_global].custo==109.93;);
}













