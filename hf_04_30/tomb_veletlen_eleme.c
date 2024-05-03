#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define MAX 20 

int randint(int lo, int hi)
 {
    return lo+(rand()%(hi - lo + 1));
 }
 
 int choice(const int n, const int tomb[])
 {
    int random=randint(1,MAX);

    return tomb[random];     
 }

int main()
{
    srand(time(NULL));
    int szamok[MAX];
    for (int i = 0; i < MAX; i++)
    {
       szamok[i]=i;
    }
    printf("A véletlen kiválasztott elem: %d\n",choice(MAX, szamok));
    return 0;
}