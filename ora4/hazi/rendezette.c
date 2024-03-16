#include <stdio.h>

int rendezette(int n, int tomb[])
{
    int counter = 1;
    for (int i = 0; i < n; i++)
    {
        if (tomb[i] <= tomb[i + 1])
        {
            counter++;
        }
    }
    if (counter == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int t[5] = {1, 4, 3, 4, 5};
    int n = 5;

    if (rendezette(n, t) == 1)
    {
        printf("A tömb rendezett!\n");
    }
    else
        printf("A tömb nem rendezett!\n");

    return 0;
}