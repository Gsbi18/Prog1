#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
 int randint(int lo, int hi)
 {
    return lo+(rand()%(hi - lo + 1));
 }
 
 void kiir(const int n, int tomb[])
 {
    for (int i = 0; i < n; i++)
    {
       printf("%d ",tomb[i]);
    }  
    puts("");
 }
 void shuffle(const int n, int tomb[])
 {
    for (int i = n-1 ;i>=1; i--)
    {
        int r = randint(0,i);
        int temp=tomb[r];
        tomb[r]=tomb[i];
        tomb[i]=temp;
    }  
 }

int main()
{
    srand(time(NULL));
    int tomb[10];
    for (int i = 0; i < 10; i++)
    {
        tomb[i]=i;
    }

    kiir(10,tomb);
    shuffle(10,tomb);
    kiir(10,tomb);


    return 0;
}