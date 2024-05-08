#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef char *string;

void mellek_atlo(int sor, int oszlop, int tomb[sor][oszlop])
{
    int i = 0;
    int j = oszlop - 1;
    while (1)
    {
        printf("%d, ", tomb[i][j]);
        i++;
        j--;
        if (j == 0)
        {
            printf("%d, ", tomb[i][j]);
            break;
        }
    }
}

int main()
{
    int tomb[6][6] = {{1, 2, 3, 4, 5, 6},
                      {7, 8, 9, 10, 11, 12},
                      {1, 2, 3, 5, 6, 8},
                      {11, 21, 3, 32, 6, 6},
                      {56, 65, 13, 65, 32, 654},
                      {13, 6, 89, 132, 3, 5}};

    for (int sor = 0; sor < 6; sor++)
    {
        for (int oszlop = 0; oszlop < 6; oszlop++)
        {
            printf("%d\t", tomb[sor][oszlop]);
        }
        puts("");
    }
    puts("Mellek atlo elemek:");
    mellek_atlo(6, 6, tomb);

    return 0;
}