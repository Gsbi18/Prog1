#include <stdio.h>
#include "prog1.h"
#include <string.h>

int contains_char(string s, char c)
{
    
        if (find_char(s, c)==-1)
        {
            return 0;
        }
        else return 1;
  
}
int find_char(string s, char c)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
        {
            return i;
        }
    }
    return -1;
}
char get_char(string prompt)
{
    char ch;
    printf("%s", prompt);
    scanf("%c", &ch);
    return ch;
}

int main()
{
    string text = get_string("Text: ");
    char c = get_char("Char: ");

    printf("'%c' benne van: %s\n", c, find_char(text, c) ? "igen" : "nem");
    printf("'%c' indexe: %d\n", c, find_char(text, c));

    return 0;
}