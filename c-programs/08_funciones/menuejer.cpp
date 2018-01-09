#include <stdio.h>
#include <stdlib.h>

#define recientes 1
#define carpeta_personal 2
#define descargas 3
#define documentos 4
#define imagenes 5
#define musica 6
#define videos 7
#define papelera 8

int main(){


    unsigned opcion;
opcion
    system("toilet --gay -fpagga MENU");

    printf(
            "Que carpeta deseas abrir:\n"
            "\t 1.Carpeta Personal\n"
            "\t 2.Descargas\n"
            "\t 3.Documentos\n"
            "\t 4.Imagenes\n"
            "\t 5.Musica\n"
            "\t 6.Videos\n"
            "\t 7.Papelera\n"
            "\n"
            "\tOpcion:"
          );
    scanf(" %u", &opcion);

    switch(opcion) {
        case 1:
        printf("Has abierto la carpeta RECIENTES\n");
        break;

        case 2:
        printf("Has abierto la carpeta CAPETA_PERSONAL\n");
        break;

        case 3:
        printf("Has abierto la carpeta DESCARGAS\n");
        break;
        case 4:
        printf("Has abierto la carpeta DOCUMENTOS\n");
        break;

        case 5:
        printf("Has abierto la carpeta IMAGENES\n");
        break;

        case 6:
        printf("Has abierto la carpeta MUSICA\n");
        break;
        case 7:
        printf("Has abierto la carpeta VIDEOS\n");
        break;
        case 8:
        printf("Has abierto la carpeta PAPELERA\n");
        break;



    }


    return EXIT_SUCCESS;
}
