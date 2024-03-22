#include <stdio.h>
#include "../prog1.h"

int rfind_char(string s, char c)
{
    int db = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
        {
            db++;
        }
    }
    return db;
}

int main()
{
    printf("%d\n", rfind_char("Abba", 'x'));

    return 0;
}