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
#include "NovoVeiculo.h"
#include "MarcarIPO.h"
#include "RegistarIPO.h"
int main(){
indice_global=0;
SetConsoleTitle("Software Centro IPO");
setlocale(LC_ALL,"");
char escolha='7';
    do{
     printf("\n \t\t\t\tCentro de Inspe��es\n");
     printf("Total de Ve�culos:  %d\t\t\t\t\t\tReceita Obtida(Eur): %.2f\nInspe��es Marcadas: %d\t\t\t\t\t\tInspe��es Efetuadas: %ld\n\n",nveiculos,receita,nmarcadas,efetuadas);
     printf("1. Novo Ve�culo \n");
     printf("2. Marcar Inspe��o \n");
     printf("3. Registar Inspe��o \n");
     printf("4. Listar \n");
     printf("5. Informa��es \n");
     printf("6. Gravar \n");
     printf("0. Sair \n");
     printf("\n\t\t\t  Selecione a op��o pretendida:\t");
     scanf(" %c",&escolha);
     printf("\n");
        switch(escolha){
         case '1':
            pedirNovoVeiculo(indice_global);
             break;
         case '2':
             marcarNovaIPO(indice_global);
             break;
         case '3':
             registarnovaIPO(indice_global);
             break;
         case '4':/*Listar*/
             break;
         case '5':/* Informa��es*/
             break;
         case '6':/* Gravar*/
             break;
         case '0': printf("  \t\t\t\tAT� � PR�XIMA!\n");
             break;
         default: printf("\n\t\t\t\t  OP��O INV�LIDA\n");}}
    while (escolha !=0);
    return 0;
}


