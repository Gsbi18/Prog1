#include <stdio.h>

int main()
{

    int szam;
    printf("Adj meg egy számot: ");
    scanf("%d",&szam);
    if (szam>0)
    {
        printf("A szám pozitív!");
    }
    else if (szam<0)
    {
        printf("A szám negatív!");
    }
    else 
    {
        printf("A szám nulla!");
    }   
    return 0;
}