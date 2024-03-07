#include <stdio.h>

int main()
{
    int szam;
    int counterpos=0;
    int counterneg=0;
    do
    {
        printf("Adj meg számot (kilépés:0): ");
        scanf("%d",&szam);
        if (szam>0){
            counterpos++;
        }
        else if(szam<0){
            counterneg++;
        }
    }while(szam!=0);

    printf("Pozitív elemek száma: %d\n",counterpos);
    printf("Negatív elemek száma: %d\n",counterneg);

    return 0;
}