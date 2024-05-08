#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
typedef char *string;

void my_strfry(string s1)
{
    int also = 0;
    int felso = strlen(s1) - 1;
    int intervallum = (felso - also) + 1;

    for (int i = 0; s1[i] != '\0'; i++)
    {
        int random = rand();

        int j = random % intervallum + also;
        int temp = s1[i];
        s1[i] = s1[j];
        s1[j] = temp;
    }
    for (int i = 0; s1[i] != '\0'; i++)
    {
        printf("%c", s1[i]);
    }
}

int main(int argc, string argv[])
{
    srand(time(NULL));
    my_strfry(argv[1]);
    return 0;
}