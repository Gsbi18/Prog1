#include <stdio.h>


int main()
{
    int meret = 10;
    int tomb[meret];
    
    for (int i = 0; i < meret; i++)
    {
       tomb[i]=0;
    }
    

    for (size_t i = 0; i < 10; i++)
    {
        printf("%d ",tomb[i]);
    }
    
    return 0;
}