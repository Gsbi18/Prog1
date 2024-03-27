#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "prog1.h"

int main(int argc, string argv[])
{
    if (argc > 2)
    {
        puts("Hiba! Maximum egy paraméter adható meg!\n");
        exit(1);
    }
    // ha ideér akkor argc = 1 vagy argc = 2

    string nev = argv[1];
    if (argc == 1)
    {
        printf("Hello World\n");
    }
    else
    {
        if ((strcmp(nev, "Batman") == 0) || (strcmp(nev, "Robin") == 0))
        {
            printf("Denevérveszély!!!\n");
        }
        else
        {
            printf("Hello %s\n", nev);
        }
    }

    return 0;
}