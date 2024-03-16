#include <stdio.h>

int valid_triangle(int a, int b, int c)
{
    if (a > 0 && b > 0 && c>0)
    {
        if (a + b > c && a + c > b && b + c > a)
        {
            return 1;
        }
        else
            return 0;
    }
    return 0;
}

int main()
{
    int jo = valid_triangle(1, 2, 15);
    printf("%d", jo);

    return 0;
}