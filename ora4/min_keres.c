#include <stdio.h>
int min_elem(const int n,const int tomb[])
{
    int min = tomb[0];
    for (int i = 1; i < n; i++)
    {
        if (tomb[i] < min)
        {
            min = tomb[i];
        }
    }
    return min;
}
int main()
{
    int szamok[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int szamok_meret = 10;
    printf("%d\n", min_elem(szamok_meret, szamok));

    return 0;
}