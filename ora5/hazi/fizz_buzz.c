#include <stdio.h>
#include <string.h>
#include "../prog1.h"
 
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i%3==0&&i%5==0)
        {
            
            printf("%s\n","fizzbuzz");
            continue;
        }
        if (i%3==0)
        {
            
            printf("%s\n","fizz");
            continue;
        }
        if (i%5==0)
        {
            
            printf("%s\n","buzz");
            continue;
        }
printf("%d\n",i);
        
    }
    


    return 0;
}