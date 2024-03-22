#include <stdio.h>
#include "prog1.h"

int my_strlen(string s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        i++;
    }

    return i;
}
int main()
{
    string s = "hello";

    int hossz = my_strlen(s);
    printf("Hossz: %d\n", hossz);

    return 0;
}