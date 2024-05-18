#include <stdio.h>
#include <stdlib.h>

typedef char *string;

int cmp(const void *bal, const void *jobb)
{
    const int *a = (const int *)bal;
    const int *b = (const int *)jobb;
    return *a - *b;
}

void kiir(string prompt, int meret, int tomb[])
{
    printf("%s", prompt);
    for (int i = 0; i < meret; i++)
    {
        printf("%d ", tomb[i]);
    }
    puts("");
}

int main()
{
    int szamok[5] = {88, 56, 100, 2, 25};
    int meret = 5;
    kiir("Előtte: ", meret, szamok);
    qsort(szamok, meret, sizeof(int), cmp);
    kiir("Utána: ", meret, szamok);
    return 0;
}