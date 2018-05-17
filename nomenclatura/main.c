#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *punteroNumero;
    int numero;
    int numeroDos;
    numero=66;
    //&numeroDos=&numero;
    numeroDos = &numero; //le asigno la posicion de memoria
    printf("a- %d\n",numeroDos);
    punteroNumero = &numero;
    numeroDos = *punteroNumero; //le asigno el valor
    printf("b- %d\n",numeroDos);
    //*punteroNumero=&numero;
    //*punteroNumero=55;
    printf("%d\n",numero);
    printf("%d\n",numeroDos);
    printf("%d\n",&numero);
    printf("%d\n",punteroNumero);
    printf("%d\n",&punteroNumero);
    printf("%p\n",&numero);
    printf("%p\n",punteroNumero); //posicion de memoria de la variable
    printf("%p\n",&punteroNumero); //posicion de memoria del puntero
    printf("%d",*punteroNumero); //variable
    return 0;
}
