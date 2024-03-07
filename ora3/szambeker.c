#include <stdio.h>

int get_int()
{
    int szam;
    do
    {
        printf("Adj meg egy számot!: ");
        scanf("%d", &szam);
        if (szam > 0)
        {
            return szam;
        }

    } while (1 == 1); 
}

int main()
{
    int n = get_int();
    printf("A megadott szám: %d\n", n);

    return 0;
}