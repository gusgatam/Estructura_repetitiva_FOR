#include <stdio.h>
#include <stdlib.h>

int main()
{
    int alu;
    float pf;
    float p;
    int ii=0;
    float pc;
    int i=0;
    for (i=0;i<3;i++)//solo para prueba
    {
        pf=0;
        alu=0;
        p=0;
        for (ii=0;ii<2;ii++)//solo para prueba
        {
            printf("\ningrese las notas: ");
            scanf("%d", &alu);
            p=p+alu;
        }
        pf=p/2;
        printf("\nEl promedio del alumno es: %.3f", pf);
        pc=pc+pf;

    }
    pc=pc/3;
    printf("\nEl promedio del curso es: %.3f", pc);
    return 0;
}

