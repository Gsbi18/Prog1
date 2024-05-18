#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define BUFFSIZE 90
#define MAX 100

typedef char *string;
typedef struct
{
    char nev[20];
    int kor;
    char szak[5];
} Hallgato;

int cmp(const void *h1, const void *h2)
{
    const Hallgato *a = h1;
    const Hallgato *b = h2;

    return strcmp(a->nev, b->nev);
}

int feltolt(const char *fname, const int n, Hallgato tomb[])
{
    // olvassuk a fájlt soronként
    FILE *fp = fopen(fname, "r");
    if (fp == NULL)
    {
        fprintf(stderr, "I/O error\n");
        exit(1);
    }
    char buffer[BUFFSIZE];
    char *p;
    string nev;
    int kor;
    string szak;
    int index = 0;
    while (fgets(buffer, BUFFSIZE, fp) != 0)
    {
        buffer[strlen(buffer) - 1] = '\0';
        p = strtok(buffer, ",");
        nev = p;
        p = strtok(NULL, ",");
        kor = atoi(p);
        p = strtok(NULL, ",");
        szak = p;
        Hallgato h;
        strcpy(h.nev, nev);
        h.kor = kor;
        strcpy(h.szak, szak);

        tomb[index] = h;
        index++;
    }
    fclose(fp);

    return index;
}
void print_hallgato(const Hallgato *h)
{
    printf("Név: %s, Kor: %d, Szak: %s\n", h->nev, h->kor, h->szak);
}
int strcmpi(const string s1, const string s2)
{
    if (strlen(s1) != strlen(s2))
    {
        return -1;
    }
    int flag = false;
    for (int i = 0; s1[i] != '\0'; i++)
    {
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]);
        if (c1 == c2)
        {
            flag = 0;
        }
        else
        {
            flag = 1;
            return flag;
        }
    }
    return flag;
}
int kiszur_ptisek(int n, Hallgato tomb[n], Hallgato ptisek[])
{
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        Hallgato akt = tomb[i];
        if (strcmpi(akt.szak, "pti") == 0)
        {
            ptisek[index] = akt;
            index++;
        }
    }
    return index;
}
int main()
{
    const char *fname = "input.txt";

    Hallgato tomb[MAX];
    int elemszam = feltolt(fname, MAX, tomb);

    /*
    for (int i = 0; i < elemszam; i++)
     {
         print_hallgato(&tomb[i]);
     }

    puts("----");
    */

    Hallgato ptisek[MAX];

    int ptis_elemszam = kiszur_ptisek(elemszam, tomb, ptisek);
    qsort(ptisek, ptis_elemszam, sizeof(Hallgato), cmp);
    for (int i = 0; i < ptis_elemszam; i++)
    {
        print_hallgato(&ptisek[i]);
    }

    return 0;
}