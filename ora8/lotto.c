#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prog1.h"
#include <time.h>

void rendez(int n, int tomb[])
{
}

int main()
{
    printf("Hány db random számot szeretnél? \n");
    int db = 0;
    scanf("%d", &db);
    int also = 0;
    printf("Alsó határ: ");
    scanf("%d", &also);

    int felso = 0;
    printf("Felső határ: ");
    scanf("%d", &felso);

    int intervallum = felso - also + 1;
    srand(time(NULL));
    int szamok[db];
    int exist = 0;
    for (int i = 0; i < db; i++)
    {
        do
        {
            int random = rand();
            szamok[i] = random % intervallum + also;
            exists = 0;
            for (int j = 0; j < i; j++)
            {
                if (szamok[i] == szamok[j])
                {
                    exist = 1;
                    break;
                }
            }
        } while (exist);
        printf("%d ",szamok[i]);
    }

    return 0;
}