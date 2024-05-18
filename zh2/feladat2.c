#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char *swapcase(const char *original)
{
    char *new = strdup(original);
    for (int i = 0; i < strlen(new); i++)
    {
        if (islower(new[i]))
        {
            new[i] = toupper(new[i]);
        }
        else if (isupper(new[i]))
        {
            new[i] = tolower(new[i]);
        }
    }

    return new;
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Adj meg pontosan egy szót!\n");
        exit(1);
    }
    char *szo = argv[1];
    szo = swapcase(szo);
    printf("%s\n", szo);
    free(szo);
    return 0;
}