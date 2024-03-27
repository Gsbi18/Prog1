#include <stdio.h>
#include "prog1.h"
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc == 3)
    {
        printf("Az összeg: %d\n", atoi(argv[1]) + atoi(argv[2]));
    }
    else
    {
        printf("Hiba! Két paramétert (számot) kell megadni.\n");
    }

    return 0;
}