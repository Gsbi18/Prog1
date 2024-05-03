#include <stdio.h>
#include <string.h>
#include "prog1.h"

#define MAX 1000

int main()
{
    char text[MAX];
    int counter = 0;

    while (1)
    {
        printf("Adj meg egy szót: \n");
        fgets(text, MAX, stdin);
        text[strlen(text)-1]='\0';
        if (strcmp(text,"*")==0 && text[strlen(text)]=='\0')
        {
            break;
        }
        if (text[strlen(text)-1]=='f' && text[strlen(text)-2]=='i' &&text[strlen(text)-3]=='g' &&text[strlen(text)-4]=='.'  )
        {
            counter++;
        }    
    }
    
    printf("%d\n",counter);

    return 0;
}