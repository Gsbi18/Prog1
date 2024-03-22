#include <stdio.h>
#include "prog1.h"

int get_int(string prompt)
{
    int szam;
    printf("%s", prompt);
    scanf("%d", &szam);
    return szam;
}

int main()
{
    int x = get_int("Szám: ");
    printf("A megadott szám %d\n", x);

    return 0;
}
