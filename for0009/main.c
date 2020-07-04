#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int num;
    int c=0;
    int c1=0;
    for (i=0;i<20;i++)
    {
        printf("\nIngrese su saldo: ");
        scanf("%d", &num);
        if (num>2000)
        {
            c=c+1;
        }
        else
        {
            c1=c1+1;
        }
    }
    printf("\nLos que ganan mas de 2000 son: %d", c);
    printf("\nLos que ganan menos de 2000 son: %d", c1);
    return 0;
}
