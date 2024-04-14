#include <stdio.h>

void inc(int *a)
{
    *a += 1;
}

int main()
{
    int x = 1;

    inc(&x);

    printf("%d\n", x);
    return 0;
}