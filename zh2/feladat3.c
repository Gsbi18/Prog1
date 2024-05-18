#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
    int max;
    int min;
} Matrix;

int randInt(int lo, int hi)
{
    return lo + (rand() % (hi - lo) + 1);
}
void feltolt(int matrix[5][5], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = randInt(10, 99);
        }
    }
}
void kiir(int matrix[5][5], int n)
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
Matrix search_min_max(int n, int matrix[5][5], Matrix minmax)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (minmax.min < matrix[i][j])
                minmax.min = matrix[i][j];
            if (minmax.max > matrix[i][j])
                minmax.max = matrix[i][j];
        }
    }
    return minmax;
}

int main()
{

    srand(1980);
    Matrix minMax;
    int matrix[5][5];
    int meret = 5;
    feltolt(matrix, meret);
    kiir(matrix, meret);
    puts("");
    minMax = search_min_max(meret, matrix, minMax);
    printf("A legnagyobb: %d\n", minMax.max);
    printf("A legkisseb: %d\n", minMax.min);
    return 0;
}