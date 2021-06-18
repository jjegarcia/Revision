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
void novoRegisto ()
{
    void regHorario();
    void regDur();
    void regAnot();
    void regPrice();
}

void regHorario ()
{
    fflush(stdin);
    int h,m;
    printf("\nInsira a hora:");
    scanf("%d", &h);
    printf("\nInsira os minutos:");
    scanf("%d", &m);
    printf("\nO Horário registado é %d:%d", h,m);
    //registos[indice_global].horario=h&&m
}
