#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int palabra1 = strlen(argv[1]);
    int palabra2 = strlen(argv[2]);
    printf("La Primera Palabra es %s y mide %ld, y la segunda es %s y mide %ld", argv[1], palabra1, argv[2], palabra2);
    return 0;
}


/*El reto es crear un programa que reciba cadenas de caracteres y diga cual es más grande*/
