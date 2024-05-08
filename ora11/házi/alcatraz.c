#include <stdio.h>

#define cellak_szama 600

int main()
{
    int cellak[cellak_szama] = {0};
    for (int step = 1; step <= cellak_szama; step++)
    {
        for (int cell = step - 1; cell < cellak_szama; cell += step)
        {
            cellak[cell] = !cellak[cell];
        }
    }

    printf("Nyitva maradt cellák sorszámai: ");
    for (int i = 0; i <= cellak_szama; i++)
    {
        if (cellak[i] == 1)
        {
            printf("%d ", i + 1);
        }
    }
    printf("\n");

    return 0;
}