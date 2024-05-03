#include <stdio.h>
#include <stdlib.h>

#define SEED 4545
#define LIMIT 10

int rand_int(int lo, int hi)
{
    return lo + (rand() % (hi - lo + 1));
}
void feltolt(const int n, int tomb[])
{
    for (int i = 0; i < n; i++)
    {
        tomb[i] = rand_int(21, 79);
    }
}
void kiirat(const int n, const int tomb[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", tomb[i]);
    }
    puts("");
}

// sorted() kap egy tömböt, nem módosítjuk, készítünk egy másolatot és azt rendezzük helyben majd a végén vissza adjuk a rendezett másolatot
void sort_asc(const int n, int tomb[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {

            if (tomb[j] > tomb[j + 1])
            {
                int tmp = tomb[j];
                tomb[j] = tomb[j + 1];
                tomb[j + 1] = tmp;
            }
        }
    }
}
int *sorted(const int n, const int tomb[])
{

    int *copy = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        copy[i] = tomb[i];
    }
    sort_asc(n, copy);

    return copy;
}

int main()
{

    srand(SEED);
    int eredeti[LIMIT];
    rand_int(21, 79);
    feltolt(LIMIT, eredeti);
    kiirat(LIMIT, eredeti);
    int *rendezett = sorted(LIMIT, eredeti);
    kiirat(LIMIT, eredeti);
    kiirat(LIMIT, rendezett);

    free(rendezett);
    return 0;
}