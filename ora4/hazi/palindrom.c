#include <stdio.h>

void kiir(const int n, const int tomb[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", tomb[i]);
    }
    puts(" ");
}
int palindrom(int n, int tomb[])
{
    int i = tomb[0];
    int j = tomb[n - 1];
    int bool = 0;
    while (i == j)
    {
        if (tomb[i] == tomb[j])
        {
            bool = 1;
        }
        i++;
        j--;
    }
    return bool;
}
int main()
{
    int szamok[10] = {5, 1, 2, 3, 4, 5, 3, 2, 1, 5};
    int szamok_meret = 10;

    kiir(szamok_meret, szamok);

    int igaz = palindrom(szamok_meret, szamok);

    if (igaz == 1)
    {
        printf("Palindrom\n");
    }
    else
        printf("Nem palindrom\n");

    return 0;
}