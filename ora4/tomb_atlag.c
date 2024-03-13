#include <stdio.h>

double array_avg(int n, int tomb[])
{
    double osszeg = 0;
    for (int i = 0; i < n; i++)
    {
        osszeg = tomb[i] + osszeg;
    }
    return osszeg / n;
}

int main()
{
    int szamok[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int szamok_meret = 10;

    printf("%.2lf\n", array_avg(szamok_meret, szamok));

    return 0;
}