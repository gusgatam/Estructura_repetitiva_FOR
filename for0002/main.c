#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float p=0;
    int num;
    int num1=0;//lo igualo a 0 al declararlo
    int p1;
    printf("ingrese un valor: ");
    scanf("%d", &num);
    p1=num;
    for (i=0;i<2;i++)
    {
        //num1=0;
        printf("\ningrese un valor: ");
        scanf("%d", &num1);
        p=p+num1;
        if (num>num1)
        {
        }
        else
        {
            num=num1;
        }

    }
    p=(p+p1)/3;
    printf("El promedio total es: %.3f\nEl mayor es: %d", p, num);// puedo usar un solo printf para mostrar todo el msj.
    //printf("El mayor es: %d", num);
    return 0;
}
