#include <stdio.h>

int my_abs(int n)
{
    if (n < 0)
    {
        return n * -1;
    }
    else
        return n;
}

int main()
{
    int res = my_abs(-5);
    printf("%d\n", res);
    return 0;
}
