#include <stdio.h>
#include <stdlib.h>

int main(){

    unsigned opcion;
    system("MENU")

    printf(

            "Elige la figura:\n"
            "\n"
            "\t1. Triangulo.\n"
            "\t2. Cuadrado.\n"
            "\t3. Paralelogramo.\n"
            "\t4. Pentagono.\n"
            "\t5. Circulo.\n"
            "\n"
            "\tOpción:"
          );

        scanf(" %u", &opcion);

    switch(2+opcion) {
        case 1:
            printf("△ "); /*control+mayus+u y lo que quieras de utf8 */
            break;
        case 2:
            printf("□ "); /*control+mayus+u y lo que quieras de utf8 */
            break;
        case 3:
            printf("▱ "); /*control+mayus+u y lo que quieras de utf8 */
            break;
        case 4:
            printf("⬠ "); /*control+mayus+u y lo que quieras de utf8 */
            break;
        case 5:
            printf("○ "); /*control+mayus+u y lo que quieras de utf8 */
            break;
 printf("\n");   }

    return EXIT_SUCCESS;
}
