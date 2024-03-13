#include <stdio.h>

void kiir(int n, int tomb[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", tomb[i]);
    }
    puts(" ");
}
double array_avg(int n, int tomb[])
{
    double osszeg = 0;
    for (int i = 0; i < n; i++)
    {
        osszeg = tomb[i] + osszeg;
    }
    return osszeg / n;
}

int array_sum(int n, int tomb[])
{
    int osszeg = 0;
    for (int i = 0; i < n; i++)
    {
        osszeg = tomb[i] + osszeg;
    }
    return osszeg;
}

int main()
{
    int szamok[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int szamok_meret = 10;
    int osszeg = array_sum(szamok_meret, szamok);

    kiir(szamok_meret, szamok);
    printf("%d\n", osszeg);

    return 0;
}