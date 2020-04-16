#include <stdio.h>

int main (){
    printf("Coloca un primer número");
    int a;
    scanf("%i", &a);
    printf("Coloca un segundo número");
    int b;
    scanf("%i", &b);
    int res = a + b;
    printf ("La suma de %d y %d es %d", a, b, res);
    return 0;
}