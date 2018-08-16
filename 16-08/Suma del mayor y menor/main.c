#include <stdio.h>
#include <stdlib.h>

int extremos();

int main()
{
    int a, b, c, d;
    printf("Ingrese 4 numeros: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    printf("La suma de los extremos es: %d", extremos(a, b, c, d));
    return 0;
}
