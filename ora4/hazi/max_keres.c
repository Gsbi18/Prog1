#include <stdio.h>
int max_elem(const int n,const int tomb[])
{
    int max = tomb[0];
    for (int i = 1; i < n; i++)
    {
        if (tomb[i] > max)
        {
            max = tomb[i];
        }
    }
    return max;
}
int main()
{
    int szamok[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int szamok_meret = 10;
    printf("%d\n", max_elem(szamok_meret, szamok));

    return 0;
}