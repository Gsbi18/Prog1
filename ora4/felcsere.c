#include <stdio.h>

void kiir(const int n, const int tomb[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", tomb[i]);
    }
    puts(" ");
}
void felcsere(int n, int tomb[])
{
    int i = tomb[0];
    int j = tomb[n - 1];
    while (i < j)
    {
        int tmp = tomb[i];
        tomb[i] = tomb[j];
        tomb[j] = tmp;
        i++;
        j--;
    }
}
int main()
{
    int szamok[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int szamok_meret = 10;

    kiir(szamok_meret, szamok);
    felcsere(szamok_meret, szamok);
    kiir(szamok_meret, szamok);

    return 0;
}