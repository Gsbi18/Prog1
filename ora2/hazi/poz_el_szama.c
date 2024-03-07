#include <stdio.h>

int main()
{
    int szam;
    int counter;
    do
    {
        printf("Adj meg számot (kilépés:0): ");
        scanf("%d",&szam);
        if(szam>0){
            counter++;
        }
    }while(szam!=0);

    printf("Pozitív elemek száma: %d\n",counter-1);

    return 0;
}