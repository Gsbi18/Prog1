#include <stdio.h>
#include "prog1.h"
#include <string.h>

int my_strlen(string s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        i++;
    }

    return i;
}
int is_palindrome(string s)
{
    int j = my_strlen(s) - 1;
    int i = 0;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            return 0; // false
        }
        i++;
        j--;
    }
    return 1; // true
}

int main()
{
    string s = "anna";
    printf("'%s' palindróm? %s\n", s, is_palindrome(s) ? "igen" : "nem");
    return 0;
}