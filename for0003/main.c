#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int ii;
    int num;
    int num1;
    int con;
    printf("Ingrese un valores: ");
    scanf("%d", &num);
    printf("Ingrese un valores: ");
    scanf("%d", &num1);
    if (num>num1)
    {
        for (num1=num1+1;num1<num;num1++)
        {
            printf("\nLos numeros interiores son: %d", num1);
        }
    }
    else
        {
            for (num=num+1;num<num1;num++)
        {
            printf("\nLos numeros interiores son: %d", num);
        }
        }

    return 0;
}
