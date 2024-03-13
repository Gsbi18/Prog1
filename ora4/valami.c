#include <stdio.h>

void kiir(const int n, const int tomb[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", tomb[i]);
    }
    puts(" ");
}

void atad(const int n, const int tomb[])
{
    
}
int main()
{
    int szamok[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int szamok_meret = 10;

    kiir(szamok_meret, szamok);
    atad(szamok_meret, szamok);
    kiir(szamok_meret, szamok);

    return 0;
}