#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int rand_int(int lo, int hi)
{
    return lo + (rand() % (hi - lo + 1));
}
void feltolt(int n, int matrix[6][6])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = rand_int(10, 99);
        }
    }
}

void kiir(int n, int matrix[6][6])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        puts("");
    }
}

void foatlo(int n, int matrix[6][6])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                printf("%d ", matrix[i][j]);
            }
        }
    }
}
int main()
{
    srand(time(NULL));
    int matrix[6][6];
    int meret = 6;
    feltolt(meret, matrix);
    kiir(meret, matrix);
    puts("");
    foatlo(meret, matrix);
    puts("");
    return 0;
}