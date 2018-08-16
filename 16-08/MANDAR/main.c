#include <stdio.h>
#include <stdlib.h>

int sumas(int n, int m){
    if      (n%2 == 1 && m%2 == 1) return n * m;
    else if (n%2 == 0 && m%2 == 0) return n + m;
    else                           return (n%10) + (m%10);
}

int main()
{
    int a, b;
    printf("Ingrese 2 numeros: ");
    scanf("%d", &a);
    scanf("%d", &b);

    printf("El resultado es: %d", sumas(a, b));
    return 0;
}
