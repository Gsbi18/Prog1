#include <stdio.h>
#include "../prog1.h"

int char_count(string s, char c)
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
    printf("%d\n", char_count("Abba", 'a'));

    return 0;
}