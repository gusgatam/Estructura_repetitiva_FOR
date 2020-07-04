#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int num=0;
    int c=0;
    int c1=0;
    int c2=0;
    for (i=0;i<10;i++)
    {
        printf("Ingrese un numero: ");
    scanf("%d", &num);
    if (num==0)
    {
        c=c+1;
    }
    else
    {
        if(0<num)
        {
            c1=c1+1;
        }
        else
        {
            c2=c2+1;
        }
    }
    }
    printf("\nLos iguales a cero son: %d", c);
    printf("\nLos positivos son: %d", c1);
    printf("\nLos negativos son: %d", c2);
    return 0;
}
