#include <stdio.h>
#include "main.h"
/**
 * printMul - prints multiplication table
 */ 

void printMul(void)

{
    int i, j;
    for (i = 1; i <= 14; i++)
    {
        for (j = 1; j <= 14; j++)
        {
            printf("%d", i * j);
            printf(",");
        }
        printf("\n");
    }
}
