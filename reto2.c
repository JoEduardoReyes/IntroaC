#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int palabra1 = strlen(argv[1]);
    int palabra2 = strlen(argv[2]);
    char * mostrar;
    mostrar = "Hola"; 
    printf("%s", mostrar);
    return 0;
}

/*El reto es crear un programa que reciba cadenas de caracteres y diga cual es más grande*/
