#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main()
{
    printf("\n  **  PROGRAMA ORDENADOR DE NUMEROS  **\n\n");
    int numeros_a_ordenar;
    printf("  Diga cuantos numeros desea ordenar:  ");
    scanf(" %d", &numeros_a_ordenar);
    printf("\n  Bien. Diga en el orden que quiera cuales son...\n");
    int vector_numeros[numeros_a_ordenar];
    int i, j, k=1;
    for(i=0;i<numeros_a_ordenar;i++)
    {
        printf("  %dºnumero: ", k);
        scanf(" %d", &j);
        vector_numeros[i] = j;
        k++;
    }
    printf("\n\n  De acuerdo. Entonces los numeros que quiere ordenar son:  \n");
    printf("  ");
    for(i=0;i<numeros_a_ordenar;i++)
    {
        printf("%d  ", vector_numeros[i]);
    }
    int x, y;
    for(i=0;i<numeros_a_ordenar;i++)
    {
        for(j=i+1;j<numeros_a_ordenar;j++)
        {
            x = vector_numeros[i] - vector_numeros[j];
            if(x>0)
            {
                y = vector_numeros[j];
                vector_numeros[j] = vector_numeros[i];
                vector_numeros[i] = y;
            }
        }
    }
    printf("\n\n  Bien. Ahora sus numeros estarian ordenados de esta forma:  \n");
    printf("  ");
    for(i=0;i<numeros_a_ordenar;i++)
    {
        printf("%d  ", vector_numeros[i]);
    }
}

