#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define ascii_difference 32
#define buffersize 200
#define MAX_HOSSZ 100
#define MAX_DARABSZAM 100

int strcmpi(const char *s1, const char *s2)
{
    int check = 1;
    int hossz = strlen(s1);
    for (int i = 0; i < hossz; i++)
    {
        if (s1[i] != s2[i] && s1[i] + ascii_difference != s2[i] && s1[i] != s2[i] + ascii_difference)
        {
            check = 0;
            break;
        }
    }

    return check;
}

void error()
{
    fprintf(stderr, "A fájlt nem sikerült megnyitni!\n");
    exit(1);
}

void kiir(int meret, char nevek[][MAX_HOSSZ])
{
    for (int i = 0; i < meret; i++)
    {
        printf("%s ", nevek[i]);
    }
    puts("");
}

void nagybetu(int meret, char nevek[][MAX_HOSSZ])
{
    for (int i = 0; i < meret; i++)
    {
        if (!isupper(nevek[i][0]))
        {
            nevek[i][0] = toupper(nevek[i][0]);
        }
    }
}

void rendez(int meret, char nev[][MAX_HOSSZ])
{
    for (int i = 0; i < meret; i++)
    {
        for (int j = i + 1; j < meret; j++)
        {
            if (strcmp(&nev[i][0], &nev[j][0]) > 0)
            {
                char *temp = malloc(MAX_HOSSZ * sizeof(char));
                strcpy(temp, nev[i]);
                strcpy(nev[i], nev[j]);
                strcpy(nev[j], temp);
                free(temp);
            }
        }
    }
}

int main()
{
    char nevek[MAX_DARABSZAM][MAX_HOSSZ];
    int darabszam = 0;
    char *filename = "nevek.csv";
    FILE *fp = fopen(filename, "r");
    if (fp == NULL)
    {
        error();
    }

    char sor[buffersize];
    char *mutato;
    char nev[MAX_HOSSZ];
    int eletkor;
    char szak[MAX_HOSSZ];

    while (fgets(sor, buffersize, fp) != NULL)
    {
        sor[strlen(sor) - 1] = '\0';
        mutato = strtok(sor, ",");
        strcpy(nev, mutato);
        mutato = strtok(NULL, ",");
        eletkor = atoi(mutato);
        mutato = strtok(NULL, ",");
        strcpy(szak, mutato);

        if (strcmpi(szak, "pti") == 1)
        {
            strcpy(nevek[darabszam], nev);
            darabszam++;
        }
    }
    // kiir(darabszam, nevek);
    nagybetu(darabszam, nevek);
    // kiir(darabszam, nevek);
    rendez(darabszam, nevek);
    kiir(darabszam, nevek);

    fclose(fp);
    return 0;
}
