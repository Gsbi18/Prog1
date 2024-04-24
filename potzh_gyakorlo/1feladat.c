#include <stdio.h>
#include <string.h>
#include "prog1.h"
#include <stdlib.h>

void merge(string s1, string s2)
{
    for (int i = 0; i < strlen(s1); i++)
    {
        putchar(s1[i]);
        putchar(s2[i]);
    }
    puts("");
}
int main(int argc, string argv[])
{
    if (argc != 3)
    {
        printf("Hiba!Adj meg pontosan ket stringet!");
        exit(1);
    }
    string s1 = argv[1];
    string s2 = argv[2];
    if (strlen(s1) != strlen(s2))
    {
        printf("Nem azonos hosszúságúak!");
        exit(1);
    }

    merge(s1, s2);

    return 0;
}