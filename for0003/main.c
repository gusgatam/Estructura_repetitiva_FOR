#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, ii=0, num=0, num1=0, con=0;// puedo declarar todo en una sola linea
    /*nt ii;
    int num;
    int num1;
    int con;*/
    printf("Ingrese un valores: ");
    scanf("%d", &num);
    printf("Ingrese un valores: ");
    scanf("%d", &num1);
    if (num>num1)
    {
        for (i=num1+1;i<num;i++)/*no puedo usar os valores iniciales y finales como varaibles de control*/
        {
            printf("\nLos numeros interiores son: %d", i);
        }
    }
    else
        {
            for (i=num+1;i<num1;i++)
        {
            printf("\nLos numeros interiores son: %d", i);
        }
        }

    return 0;
}
