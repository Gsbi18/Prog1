#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x;
    int y;
} Pont;

Pont origo()
{
    Pont p;
    p.x = 0;
    p.y = 0;

    return p;
}

int main()
{
    Pont kozeppont = origo();

    printf("P(%d, %d)\n", kozeppont.x, kozeppont.y);
    return 0;
}