#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "log.h"
#include "utiles.h"

void guardarLogIPO(){
  int linea=0;
  FILE *fpt=fopen("logoListaMarcacao.txt","w");
  do{
        fprintf(fpt,"%d;",listaMarcacao[linea].novaData.dia);
        fprintf(fpt,"%d;",listaMarcacao[linea].novaData.mes);
        fprintf(fpt,"%d;",listaMarcacao[linea].novaData.ano);
        fprintf(fpt,"%s;",listaMarcacao[linea].mMatricula);
        fprintf(fpt,"%d;",listaMarcacao[linea].tipoIpo);
        fprintf(fpt,"%s;",listaMarcacao[linea].anot);
        fprintf(fpt,"%f;",listaMarcacao[linea].custo);
        fprintf(fpt,"%s;",listaMarcacao[linea].novaData);
        fprintf(fpt,"%d;",listaMarcacao[linea].hora);
        fprintf(fpt,"%d;",listaMarcacao[linea].minuto);
        fprintf(fpt,"%d;",listaMarcacao[linea].duracao);
        fprintf(fpt,"%d;",listaMarcacao[linea].resultado);
        linea++;
    }while(linea==IPO_indice_global);
    fprintf(fpt,"&\n");
    fclose(fpt);
}

void guardarLog(){
  int linea=0;
  FILE *fpt=fopen("logoListaVeiculos.txt","w");
  do{
        fprintf(fpt,"%s;",listaVeiculos[linea].matricula);
        fprintf(fpt,"%d;",listaVeiculos[linea].tipoVeiculo);
        fprintf(fpt,"%s;",listaVeiculos[linea].proprietario);
        fprintf(fpt,"%d;",listaVeiculos[linea].dataUltima.dia);
        fprintf(fpt,"%d;",listaVeiculos[linea].dataUltima.mes);
        fprintf(fpt,"%d;",listaVeiculos[linea].dataUltima.ano);
        fprintf(fpt,"%d;",listaVeiculos[linea].resultado);
        linea++;
    }while(linea==indice_global);
    fprintf(fpt,"&\n");
    fclose(fpt);
}
