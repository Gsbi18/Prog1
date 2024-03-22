#include <stdio.h>
#include "../prog1.h"

int rfind_char(string s, char c)
{
    int hely = -1;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
        {
            hely = i;
        }
    }
    return hely;
}

int main()
{
    printf("%d\n", rfind_char("Abba", 'b'));

    return 0;
}