#include "stringutils.h"

#include <ctype.h>

void capitalize(char s[])
{
    s[0] = toupper(s[0]);
    for (int i = 1; s[i] != '\0'; i++)
    {
        s[i] = tolower(s[i]);
    }
}