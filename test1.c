

int main()
{
    typedef struct{
    int numero;
    char uno[3];
    char dos[3];
}type0;

    type0 var1;
    // var1.uno="uno";
    // var1.dos="dos";
    type0 lista[2];
    lista[1].numero=1;
    scanf(" %[^n]",lista[1].uno);
    
    
    return 0;
}
