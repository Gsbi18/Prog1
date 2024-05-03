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
void reverse(const int n, int tomb[])
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int tmp = tomb[i];
        tomb[i] = tomb[j];
        tomb[j] = tmp;
        i++;
        j--;
    }
}
void sort_desc(const int n, int tomb[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {

            if (tomb[j] < tomb[j + 1])
            {
                int tmp = tomb[j];
                tomb[j] = tomb[j + 1];
                tomb[j + 1] = tmp;
            }
        }
    }
}
void sort_desc_rovid(const int n, int tomb[])
{
    sort_asc(n, tomb);
    reverse(n, tomb);
}
// sorted() kap egy tömböt, nem módosítjuk, készítünk egy másolatot és azt rendezzük helyben majd a végén vissza adjuk a rendezett másolatot

int sorted()
{
}

int main()
{

    srand(SEED);
    int tomb[LIMIT];
    rand_int(21, 79);
    feltolt(LIMIT, tomb);
    kiirat(LIMIT, tomb);
    sort_asc(LIMIT, tomb);
    kiirat(LIMIT, tomb);
    sort_desc_rovid(LIMIT, tomb);
    kiirat(LIMIT, tomb);

    return 0;
}