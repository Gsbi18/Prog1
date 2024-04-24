#include <stdio.h>
#include <stdlib.h>
 

 #define MAX 1000
 int randint(int lo, int hi)
 {
    return lo+(rand()%(hi - lo + 1));
 }
 
 void feltolt(const int n, int tomb[])
 {
    for (int i = 0; i < n; i++)
    {
        tomb[i] = randint(125,849);
    }  
 }


double get_avg(const int n, const int tomb[])
{
    int total=0;
    for (int i = 0; i < n; i++)
    {
        total+=tomb[i];
    }
    return (double)total/(double)n;
}
int get_result(int n, int tomb[], double atlag)
{
    int counter=0;
    for (int i = 0; i < n; i++)
    {
        if (tomb[i]>atlag)
        {
            counter++;
        }
        
    }
    return counter;
}

int main()
{
    srand(2021);
    int szamok[MAX];

    feltolt(MAX, szamok);

    double atlag=get_avg(MAX, szamok);
    int result=get_result(MAX,szamok,atlag);
    printf("%d\n",result);
    return 0;
}