#include <stdio.h>

int index(int n, int tomb[], int szam)
{
    for (int i = 0; i < n; i++)
    {
        if (tomb[i] == szam)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int kereset;
    printf("Adj meg egy számot amire kíváncsi vagy hogy benne van-e a tömbben: ");
    scanf("%d", &kereset);

    int szamok[10] = {0, 1, 2, 3, 5, 6, 7, 8, 9,4};
    int szamok_meret = 10;
    if (index(szamok_meret, szamok, kereset) > -1)
    {
        printf("A %d benne van a tömbben a %d helyen.\n", kereset,index(szamok_meret, szamok, kereset));
    }
    else
    {
        printf("Nincs benne a tömbben.\n");
    }

    return 0;
}