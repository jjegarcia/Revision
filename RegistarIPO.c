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

int indice_listaMarcacao=-1;

void novoRegisto(){
    indice_listaMarcacao=buscaMatricula();
    registarnovaIPO(indice_listaMarcacao);
}


void registarnovaIPO(int indice_listaMarcacao)
{
    horarioIPO(indice_listaMarcacao);
    duracaoIPO(indice_listaMarcacao);
    resultadoIPO(indice_listaMarcacao);
    anotacoesIPO(indice_listaMarcacao);
    custoIPO(indice_listaMarcacao);
}

void horarioIPO ()
{
    int h, m;
    printf("\nInsira a horário da IPO:");
    printf("\nHora:");
    scanf("%2d",&h);
    printf("\nMinutos:");
    scanf("%2d",&m);
    listaMarcacao[indice_listaMarcacao].hora=h;
    listaMarcacao[indice_listaMarcacao].minuto=m;
}
void duracaoIPO ()
{
    int d;
    printf("\nDuração da inspeção:\n");
    scanf("%2d",&d);
    printf("minutos");
    listaMarcacao[indice_listaMarcacao].duracao=d;
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
    listaMarcacao[indice_listaMarcacao].resultado=a;
}

void anotacoesIPO ()
{
    fflush(stdin);
    printf("\nInsira anotacoes:\n");
    gets(listaMarcacao[indice_listaMarcacao].anot);
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
    for (c==1;listaMarcacao[indice_listaMarcacao].custo==31.49;);
    for (c==2;listaMarcacao[indice_listaMarcacao].custo==7.9;);
    for (c==3;listaMarcacao[indice_listaMarcacao].custo==78.6;);
    for (c==4;listaMarcacao[indice_listaMarcacao].custo==109.93;);
}

