#include <stdio.h>

#define SIZE 26

void feltolt(char tomb[])
{
    for (int i = 0; i < SIZE; i++)
    {
        tomb[i] = 'a' + i;
    }
    tomb[SIZE] = '\0';
}

int main()
{
    char abece[SIZE+1];
    feltolt(abece);
    printf("%s\n", abece);

    return 0;
}