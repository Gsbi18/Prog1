#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include "prog1.h"

int strcmpi(const string s1, const string s2)
{
    if (strlen(s1) != strlen(s2))
    {
       return -1;
    }
    int flag = false;
    for (int i = 0; s1[i] != '\0'; i++)
    {
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]);
        if (c1 == c2)
        {
            flag = 0;
        }
        else
        {
            flag = 1;
            return flag;
        }
    }
    return flag;
}

int main(int argc, string argv[])
{
    if (argc != 3 )
    {
        printf("Rossz paraméterezés \n");
        exit(1);
    }


    int egyenloe = strcmpi(argv[1], argv[2]);
    if (egyenloe == 0)
    {
        printf("Ugyanazok!\n");
    }
    else if (egyenloe==-1)
    {
        printf("Nem ugyanolyan hosszú a két string!\n");
        exit(1);
    }
    else 
    {
        printf("Különböznek!\n");
    }

    return 0;
}