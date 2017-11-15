#include <stdlib.h>
#include <stdio.h>
int main(){
  
    double lado,
           area,
           perimetro;

    int l,
        a,
        p;

    l = lado;
    a = area;
    p = perimetro;

    system("toilet --gay -fpagga CUADRADO");

    /* Entrada de datos */
    printf("Lado: ");
    scanf(" %d", &lado);

    /* Calculos */
    area = lado * lado;
    perimetro = 4 * lado;
    /* Salida de datos */
    printf("Area: %d\n" "Perimetro: %d\n",
            area, perimetro);
   return EXIT_SUCCESS;
}
