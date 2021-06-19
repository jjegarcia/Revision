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
     printf("4.Dados Veículo\n");
     printf("5.Dados Marcação do Veículo\n");
     printf("0. Regressar ao menu inicial\n");
     printf("\n\t\t\t  Selecione a opção pretendida:\t");
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
         default: printf("\n\t\t\t\t  OPÇÃO INVÁLIDA\n");}}
    while (escolha !=0);
}

void VtotList ()
{
    printf("%s", *listaVeiculos);
}
