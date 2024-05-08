#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

typedef char *string;

bool strcmpi(const char *s1, const char *s2)
{
    if (strlen(s1) != strlen(s2))
    {
        printf("Hiba nem ugyanolyan hosszú! \n");
        exit(1);
    }
    bool flag = false;
    for (int i = 0; s1[i] != '\0'; i++)
    {
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]);
        if (c1 == c2)
        {
            flag = false;
        }
        else
        {
            flag = true;
            return flag;
        }
    }
    return flag;
}

int main(int argc, string argv[])
{
    if (argc != 3)
    {
        printf("Rossz paraméterezés \n");
        exit(1);
    }

    bool egyenloe = strcmpi(argv[1], argv[2]);
    if (egyenloe == 0)
    {
        printf("Ugyanazok!\n");
    }
    else
    {
        printf("Különböznek!\n");
    }

    return 0;
}