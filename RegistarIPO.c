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
#include "utiles.h"

int indice_novaMarcacao=-1;

void novoRegisto(){
    indice_novaMarcacao=buscaMatricula();
    registarnovaIPO(indice_novaMarcacao);
}


void registarnovaIPO(int indice_novaMarcacao)
{
    horarioIPO(indice_novaMarcacao);
    duracaoIPO(indice_novaMarcacao);
    resultadoIPO(indice_novaMarcacao);
    anotacoesIPO(indice_novaMarcacao);
    custoIPO(indice_novaMarcacao);
}

void horarioIPO ()
{
    int h, m;
    printf("\nInsira a horário da IPO:");
    printf("\nHora:");
    scanf("%2d",&h);
    printf("\nMinutos:");
    scanf("%2d",&m);
    novaMarcacao[indice_novaMarcacao].hora=h;
    novaMarcacao[indice_novaMarcacao].minuto=m;
}
void duracaoIPO ()
{
    int d;
    printf("\nDuração da inspeção:\n");
    scanf("%2d",&d);
    printf("minutos");
    novaMarcacao[indice_novaMarcacao].duracao=d;
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
    novaMarcacao[indice_novaMarcacao].resultado=a;
}

void anotacoesIPO ()
{
    fflush(stdin);
    printf("\nInsira anotacoes:\n");
    gets(novaMarcacao[indice_novaMarcacao].anot);
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
    for (c==1;novaMarcacao[indice_novaMarcacao].custo==31.49;);
    for (c==2;novaMarcacao[indice_novaMarcacao].custo==7.9;);
    for (c==3;novaMarcacao[indice_novaMarcacao].custo==78.6;);
    for (c==4;novaMarcacao[indice_novaMarcacao].custo==109.93;);
}
