#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[11]="MiNombre"; //no va mas
    char *apellido="MiApellido"; //ahora asi
    char *puntero;
    puntero= nombre;
    printf("%s\n",nombre);
    printf("%s\n",apellido);
    printf("%s\n", puntero);

    int i;
    for(i=0;*(apellido+i)!='\0';i++)
    {
        printf("%c",*(apellido+i));
    }

    return 0;
}
