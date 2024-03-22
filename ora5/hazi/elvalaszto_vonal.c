#include <stdio.h>
#include "../prog1.h"

void line(char c, int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        printf("%c", c);
    }
    printf("%c\n", c);
}

int main()
{
    printf("hello\n");
    line('-', 40);
    printf("world\n");

    return 0;
}