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
#include "Listar.h"
void listar ()
{
    char escolha='7';
    do{
     printf("\n \t\t\t\tListar\n");
     printf("1.Dados Totais\n");
     printf("2.Dados IPO Marcadas \n");
     printf("3.Dados IPO Efetuadas \n");
     printf("4.Dados Veiculo\n");
     printf("5.Dados Marcacao do Veiculo\n");
     printf("0. Regressar ao menu inicial\n");
     printf("\n\t\t\t  Selecione a opção pretendida:\t");
     scanf(" %c",&escolha);
     printf("\n");
        switch(escolha){
         case '1':
             VtotList();
             break;
         case '2':
             MList();
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
         default: printf("\n\t\t\t\t  OPCAO INVALIDA\n");}
         }
    while (escolha !=0);
}

void VtotList ()
{
    int loop;
    printf("Matricula\tTipo Veiculo\tProprietario\t\tData\t\t\tResultado\t\tNumero de IPO marcadas\n");
    for(loop=0; loop<IPO_indice_global;loop++)
    {
       printf(" %s\t\t%d\t%s\t\t%d/%d/%d\t%d\t%d\n",listaVeiculos[loop].matricula,
              listaVeiculos[loop].tipoVeiculo,
              listaVeiculos[loop].proprietario,
              listaVeiculos[loop].dataUltima.dia,
              listaVeiculos[loop].dataUltima.mes,
              listaVeiculos[loop].dataUltima.ano,
              listaVeiculos[loop].resultado,
              contarMatricula(listaVeiculos[loop].matricula));
    }

}
void MList ()
{
    int loop;
    printf("Data Marcacao\t\tMatricula\t\tTipo IPO\n");
    for(loop=0; loop<IPO_indice_global;loop++)
    printf("%d/%d/%d\t\t%s\t\t%d",
           listaMarcacao[loop].novaData.dia,
           listaMarcacao[loop].novaData.mes,
           listaMarcacao[loop].novaData.ano,
           listaMarcacao[loop].mMatricula,
           listaMarcacao[loop].tipoIpo);
}
