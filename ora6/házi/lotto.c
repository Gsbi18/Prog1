#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../prog1.h"


int main()
{
    printf("Hány db random számot kérsz? \n");
    int db=0;
    scanf("%d",&db);
    int also=0;
    printf("Alsó határ: ");
    scanf("%d",&also);

    int felso=0;
    printf("Felső határ: ");
    scanf("%d",&felso);

    int intervallum=felso-also+1;
    srand(2024);

    for (int i = 0; i < db; i++)
    {
        int random=rand();
        printf("%d, ",random%intervallum+also);
    }
    puts("");
    

    return 0;
}