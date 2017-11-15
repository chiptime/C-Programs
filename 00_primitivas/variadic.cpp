#include <stdio.h>
#include <stdlib.h> //# directiva de preproceso

int main(){    // funcion main es llamada por el sistema operativo

    int op1 = 7;
    int op2;

    printf("Operando 2:"); //& la direccion de...
    scanf(" %i", &op2); //scanf lee pipe  nº0 stinput
    printf("%i + %i = %i\n", op1, op2, op1 + op2); //% especificador de formato
    return 0;
}


