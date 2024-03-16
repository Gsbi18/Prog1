#include <stdio.h>
#include <stdlib.h>

void kiir(const int n, const int tomb[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", tomb[i]);
    }
    puts(" ");
}
void my_abs(int n, int tomb[])
{
    for (int i = 0; i < n; i++)
    {
        tomb[i] = abs(tomb[i]);
    }
}
int main()
{
    int szamok[10] = {10, -1, 2, 3, 4, -5, 6, -7, 8, 0};
    int szamok_meret = 10;

    kiir(szamok_meret, szamok);
    my_abs(szamok_meret, szamok);
    kiir(szamok_meret, szamok);

    return 0;
}