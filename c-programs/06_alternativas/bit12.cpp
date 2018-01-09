#include <stdio.h>
#include <stdlib.h>

int main(){

    char bit1;
    char bit2;

    printf("Escribe el valor del bit 1: ");
    scanf(" %[0-1]", &bit1);
    printf("Escribe el valor del bit 2: ");
    scanf(" %[0-1]", &bit2);

    if(bit1 == 0 ){
        if(bit2 == 0)
            printf("El numero es igual a 1\n");

        else(bit2 == 1)
            printf("El numero es igual a 2 \n");

    }

    else(bit1 == 1){
        if(bit2 == 1)
            printf("El numero es igual a 3 \n");
        else(bit2 == 0)
            printf("El numero es igual a 4 \n");



    }



    return EXIT_SUCCESS;
}
