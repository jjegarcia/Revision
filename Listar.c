#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
#include <Windows.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include "utiles.h"
void listar ()
{
    char escolha='7';
    do{
     printf("\n \t\t\t\tListar\n");
     printf("1.Dados Totais\n");
     printf("2.Dados IPO Marcadas \n");
     printf("3.Dados Efetuadas \n");
     printf("4.Dados Ve�culo\n");
     printf("5.Dados Marca��o do Ve�culo\n");
     printf("0. Regressar ao menu inicial\n");
     printf("\n\t\t\t  Selecione a op��o pretendida:\t");
     scanf(" %c",&escolha);
     printf("\n");
        switch(escolha){
         case '1':
             VtotList();
             break;
         case '2':
             //MList();
             break;
         case '3':
             //EfList();
             break;
         case '4':
             //VList();
             break;
         case '5':
             //MarcList();
             break;
         case '0':
             return main();
             break;
         default: printf("\n\t\t\t\t  OP��O INV�LIDA\n");}}
    while (escolha !=0);
}

void VtotList ()
{
    printf("%s", *listaVeiculos);
}
