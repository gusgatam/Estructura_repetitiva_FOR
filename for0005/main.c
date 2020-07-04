#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int num;
    int num1;
    int t=1;
    printf("ingrese un n base: ");
    scanf("%d", &num);
    printf("ingrese un n exponente: ");
    scanf("%d", &num1);
    for (i=0;i<num1;i++)
    {
        t=t*num;
    }
    printf("La potencia es: %d", t);
    return 0;
}
