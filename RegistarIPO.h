#ifndef REGISTARIPO_H_INCLUDED
#define REGISTARIPO_H_INCLUDED
typedef struct
{
    int hora, minuto;
}t_time;

typedef struct
{
  t_time horario, dur;
  int nresultado;
  char anot[100];
  float price;
}t_registo;

t_registo registos[300];
void novoRegisto();
void regHorario();
void regDur();
void regAnot();
void regPrice();


#endif // REGISTARIPO_H_INCLUDED
