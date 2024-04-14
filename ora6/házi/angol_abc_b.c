#include <stdio.h>
#include <string.h>

#include "../prog1.h"
#define SIZE 27

void feltolt(char tomb[])
{
    for (int i = 0; i < SIZE-1; i++)
    {
        tomb[i] = 'a' + i;
    }
    tomb[SIZE]='\0';
}

int main()
{
    char abece[SIZE];
    feltolt(abece);
    for (int i = 0; i < SIZE; i++)
    {
        putchar(abece[i]);
        putchar(' ');
    }
    puts("");
    printf("%s",abece);
    puts("");

    return 0;
}