#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "stringutils.h"

int main()
{

    char s1[] = "GabadsfADASF";

    printf("%s\n", s1);
    capitalize(s1);

    printf("%s\n", s1);

    return 0;
}