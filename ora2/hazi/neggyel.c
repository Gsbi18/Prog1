#include <stdio.h>

int main()
{
    int szam;
    printf("Adj meg egy számot: ");
    scanf("%d", &szam);

    for (int i = 4; i < szam; i = i + 4)
    {
        printf("%d\n", i);
    }
    return 0;
}