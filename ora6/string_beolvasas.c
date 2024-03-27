#include <stdio.h>
#include <string.h>
// #include "prog1.h"

#define SIZE 5

int main()
{
    /*
    string s = get_string("Neved: ");
    printf("Hello %s!\n",s);
    */

    char text[SIZE];
    printf("Neved: ");
    fgets(text, SIZE, stdin);
    int idx = text[strlen(text) - 1];
    if (tomb[idx] == '\n')
    {
        tomb[idx] = '\0';
    }

    printf("Hello %s!\n", text);

    return 0;
}