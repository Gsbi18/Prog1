#include <stdio.h>
#include <stdlib.h>

int main()
{
    int meret;
    printf("Hány darab számot szeretnél bevinni?\n");
    scanf("%d", &meret);
    int tomb[meret];
    for (int i = 1; i <= meret; i++)
    {
        printf("%d. szám: ", i);
        scanf("%d", &tomb[i - 1]);
    }
    int tomb_masolat[meret];
    for (int i = 0; i < meret; i++)
    {
        tomb_masolat[i] = abs(tomb[i]);
    }
    puts("");
    printf("A bevitt számok abszolútértéke: ");
    for (int i = 0; i < meret - 1; i++)
    {
        printf("%d, ", tomb_masolat[i]);
    }
    printf("%d ", tomb_masolat[meret - 1]);
    puts("");
    printf("A megadott számok: ");
    for (int i = 0; i < meret - 1; i++)
    {
        printf("%d, ", tomb[i]);
    }
    printf("%d ", tomb[meret - 1]);

    puts("");

    return 0;
}