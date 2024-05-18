#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

typedef char *string;

int is_strong_pass(string passwd)
{
    int small = 0;
    int big = 0;
    int num = 0;
    int spec = 0;

    for (int i = 0; i < strlen(passwd); i++)
    {
        char c = passwd[i];
        if (islower(c))
        {
            small = 1;
        }
        if (isupper(c))
        {
            big = 1;
        }
        if (isdigit(c))
        {
            num++;
        }
        if (c == ',' || c == '.' || c == ':' || c == ';')
        {
            spec = 1;
        }
    }
    if (small == 1 && big == 1 && num > 1 && spec == 1)
    {
        return 1;
    }

    return 0;
}

int main()
{

    FILE *fp = fopen("passwords.txt", "r");
    char line[1000];
    int counter = 0;
    while (fgets(line, 1000, fp) != NULL)
    {
        line[strlen(line) - 1] = '\0';
        if (is_strong_pass(line))
        {
            counter++;
        }
    }
    printf("%d\n", counter);
    fclose(fp);
    return 0;
}