#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 int randint(int lo, int hi)
 {
    return lo+(rand()%(hi - lo + 1));
 }
int main()
{
    srand(time(NULL));
    int length = 8;
    char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
    char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char digits[] = "0123456789";
    char spec[] = ".,;'";

    char pass[length];
    for (int i = 0; i < length; i++)
    {
        if (i<2)
        {
           pass[i]=lowercase[randint(1,26)];
        }
        else if (i<4)
        {
            pass[i]=uppercase[randint(1,26)];
        }
        else if (i<6)
        {
            pass[i]=digits[randint(1,9)];
        }
        else if(i<8)
        {
            pass[i]=spec[randint(1,4)];
        }   
    }
    
    for (int i = 0; i < length; i++)
    {
       printf("%c",pass[i]);
    }
    puts("");
    

    return 0;
}