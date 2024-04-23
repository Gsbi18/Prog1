#include <stdio.h>
#include <string.h>
#include "prog1.h"
#include <stdlib.h>
 
int main()
{
    int counter =0;
    string szam=get_string("Szám: ");
    for (int i = 0; i < strlen(szam); i++)
    {
        int x=atoi(szam);
        counter=counter+x;


        printf("%d\n",atoi(szam[i]));
    }
    
    printf("%d",counter);
    return 0;
}