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
    int szamok[10] = {100, 121, 5432, 1233, 5434, 5435, 6345, 7456, 8654, 9};
    int szamok_meret = 10;
    printf("A legnagyobb: %d\n", max_elem(szamok_meret, szamok));
    printf("A legkisebb: %d\n", min_elem(szamok_meret, szamok));

    return 0;
}