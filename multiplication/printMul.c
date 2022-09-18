#include <stdio.h>
#include "main.h"
/**
 * printMul - prints multiplecation table
 */
int main(void)

{
    int i, j;
    for (i = 1; i <= 14; i++)
    {
        for (j = i; j <= 14; j++)
        {
            printf("%d", i * j);
            printf("\n");
        }
        printf("\n");
    }

}