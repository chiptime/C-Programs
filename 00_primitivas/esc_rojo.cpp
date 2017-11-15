#include <stdio.h>

#define ROJO "\x1B[31m"
#define NORMAL "\x1B[39m"



int main(){

    printf(ROJO "12\n" NORMAL);
    return 0;
}
