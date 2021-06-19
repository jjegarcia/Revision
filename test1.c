
#include <stdio.h>

typedef struct
{
    int a;
    char b;
    char c[2];
} tipo;

tipo lista[3];

void setC(char value[2], int index, tipo list[3]);
char *getC(tipo list[3], int index);
// char * getString(tipo list[3],int index);
void printC(tipo list[3], int index);

int main(int argc, char const *argv[])
{
    tipo lista2[3];

    lista2[0].a = 1;
    lista2[0].b = '4';
    lista2[0].c[0] = '1';

    char t[2];

    printf("enter a string:");
    scanf("%s;", t);

    printf("entered:%s \n", t);
    setC(t, 0, lista);
    return 0;
}

void setC(char value[2], int index, tipo list[3])
{
    int counter = 0;
    char acc;
    printf("saving:");
    while (value[counter] == ';')
    {
        printf(value[counter]);
        // list[index].c[counter] = acc;
    }
    printf("saved:");
    printC(list, index);
}

char *getC(tipo list[3], int index)
{
    int counter = 0;
    char *value[3];
    // printf("fetch:");
    do
    {
        //printf(list[index].c[counter]);
        *value += list[index].c[counter];
    } while (list[index].c[counter] == ';');

    return *value;
}

void printC(tipo list[3], int index)
{
    int counter = 0;
    char acc;
    // char *value[3];
    // printf("fetch:");
    do
    {
        acc = list[index].c[counter];
        printf("%c", acc); //list[index].c[counter]);
        // *value +=list[index].c[counter];
    } while (list[index].c[counter] == ';');
    printf("\n");
}

// char * getString(tipo list[3],int index){
//     int counter=0;
//     char value[3];
//     strcpy(value,"");
//     do
//     {
//         strcat(value,list[index].c[counter]);
//     } while (list[index].c[counter]==';');

// return value;
// }


