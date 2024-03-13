#include <stdio.h>

int tomb_szor(int n, int tomb[])
{
    int szorzat = 0;
    for (int i = 0; i < n; i++)
    {
        szorzat = tomb[i] * szorzat;
    }
    return szorzat;
}

int main()
{
    int szamok[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int szamok_meret = 10;

    printf("%d\n", tomb_szor(szamok_meret, szamok));

    return 0;
}