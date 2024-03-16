#include <stdio.h>

void kiir(const int n, const int tomb[])
{
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d, ", tomb[i]);
    }
    printf("%d", tomb[9]);
    puts(" ");
}
int main()
{
    int szamok[10] = {10, 1, 2, 3, 4, 5, 6, 7, 8, 0};
    int szamok_meret = 10;

    kiir(szamok_meret, szamok);

    return 0;
}