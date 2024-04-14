#include <stdio.h>
#include "../prog1.h"
#include <string.h>
#include <stdlib.h>

#define SIZE 100

int main()
{
    printf("Adj meg 0 végjelig egész számokat az [1, 99] intervallumbül!\n");
    int szamok[SIZE];
    int i = 0;

    do
    {
        printf("Szám: ");
        scanf("%d", &szamok[i]);
        if (szamok[i] < 0 || szamok[i] > 99)
        {
            printf("Ez a szám kívül esik az elfogadható intervallumon!\n");
        }

        i++;

    } while (szamok[i - 1] != 0);
    puts("");
    for (int step = 0; i < SIZE - 1; i++)
    {
        for (int i = 0; i < SIZE-step-1; i++)
        {
            if (szamok[i] > szamok[i + 1])
            {
                int temp = szamok[i];
                szamok[i] = szamok[i + 1];
                szamok[i + 1] = temp;
            }
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ",szamok[i]);
    }
    

    int szam = 0;
    printf("%d db könünbüző szám lett megadva.", szam);

    return 0;
}