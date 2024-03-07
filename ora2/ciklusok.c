#include <stdio.h>

int main()
{
    /*int i=0;
    while(i<5)
    {
        printf("Gábor\n");
        i++;
    }*/

    /*for (int i=0; i<5; i++)
    {
        printf("Gábor\n");
    }*/

    /*for (int i=1; i<=10; i++)
    {
        printf("%d\n",i);
    }*/
    /*for (int i=10; i>=1; i--)
    {
        printf("%d\n",i);
    }*/
    //1-100-ig a számok összege
    /*int osszeg=0;
    for (int i=1; i<=100; i++)
    {
        osszeg=osszeg+i;
    }
    printf("%d\n",osszeg);*/
    /*const int limit =1000;
    int osszeg=0;
    for (int i = 0; i<limit; i++)
    {
       if(i%3==0 || i%5==0)
       {
        osszeg=osszeg+i;
       }
    }
    
    printf("%d\n",osszeg);*/
    /*int szam;
    do
    {
        printf("Adj megy egy pozitív egész számot: ");
        scanf("%d",&szam);
    } while (!(szam>0));

    printf("\n");
    printf("A jó szám: %d\n",szam);*/

    /*int szam=0;
    while(szam<=0){
        printf("Adj megy egy pozitív egész számot: ");
        scanf("%d",&szam);
    }

    printf("\n");
    printf("A jó szám: %d\n",szam);*/

    int szam;
    int i=0;
    do
    {
        printf("Adj meg számot (kilépés:0): ");
        scanf("%d",&szam);
        i++;
    }while(szam!=0);

    printf("%d\n",i-1);

    return 0;
}