#include <stdio.h>

#define LIMIT 4000000
int main()
{
    int a = 1;
    int b = 2;
    int paratlan_osszeg=a;
    while (1)
    {   
        int c = a + b;
        a = b;
        b = c;
        if (b>LIMIT)
        {
            break;
        }
        if (b%2==1)
        {
           paratlan_osszeg+=b;
        }
        
        
    }
    printf("%d\n",paratlan_osszeg);

    return 0;
}