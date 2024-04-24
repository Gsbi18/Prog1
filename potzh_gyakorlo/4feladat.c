#include <stdio.h>
#include <string.h>
#include "prog1.h"
#include <ctype.h>

#define MAX 100

int main()
{
    char text[MAX];
    int kisbetu = 0;
    int nagybetu = 0;
    int szokoz = 0;
    int szamok = 0;
    while (1)
    {
        printf("Szöveg (vége: *): ");
        fgets(text, MAX, stdin);
        text[strlen(text) - 1] = '\0';
        if (strcmp(text, "*") == 0)
        {
            break;
        }
        int hossz = strlen(text);
        for (int i = 0; i < hossz; i++)
        {
            char c = text[i];
            if (islower(c))
            {
                kisbetu++;
            }
            else if (isupper(c))
            {
                nagybetu++;
            }
            else if (c == ' ')
            {
                szokoz++;
            }
            else if (isdigit(c))
            {
                szamok++;
            }
        }
    }

    puts("");
    printf("Kisbetuk száma:     %d\n", kisbetu);
    printf("Nagybetűk száma:    %d\n", nagybetu);
    printf("Szóközök száma:     %d\n", szokoz);
    printf("Számjegyek száma:   %d\n", szamok);

    return 0;
}