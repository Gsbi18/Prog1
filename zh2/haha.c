#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef char *string;

#define BUFFER 1000 // Sorok mérete
#define MAX 1000    // Tömb mérete lesz
#define HATAR 500000
typedef struct
{
    double ertek;
    char nev[100];
    int vote;
} Film;

void more_than(int n, Film tomb[])
{
    int db = 0;
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        Film this = tomb[i];
        if (this.vote > HATAR)
        {
            printf("%s \n", this.nev);
            db++;
        }
    }
    printf("Ennyi %ddb film ez", db);
}

void kivesz(const char *fname, const int n, double tomb[])
{
    FILE *fp = fopen(fname, "r");
    if (fp == NULL)
    {
        printf("hiba");
        exit(1);
    }
    char *p;
    char line[BUFFER];
    double a = 0;
    int index = 0;
    while (fgets(line, BUFFER, fp) != NULL)
    {
        p = strtok(line, ";");
        if (strlen(p) > 2)
            p[1] = '.';
        a = atof(p);
        tomb[index] = a;
        index++;
    }
    fclose(fp);
}

int feltolt(const char *fname, Film tomb[])
{
    FILE *fp = fopen(fname, "r");
    if (fp == NULL)
    {
        printf("hiba");
        exit(1);
    }

    char line[BUFFER];
    // STRTOK
    char *p;
    double a;
    string b;
    int c;

    int vissza_elemszam = 0;

    while (fgets(line, BUFFER, fp) != NULL)
    {
        line[strlen(line) - 1] = '\0';
        p = strtok(line, ";");
        a = atof(p);
        p = strtok(NULL, ";");
        b = p;
        p = strtok(NULL, ";");
        c = atoi(p);

        Film f;
        f.ertek = a;
        // kivesz(fname,n,tomb);
        strcpy(f.nev, b);
        f.vote = c;

        tomb[vissza_elemszam] = f;
        vissza_elemszam++;
    }
    fclose(fp);
    return vissza_elemszam;
}

void kiir(const Film *f)
{
    printf("ertek: %lf, nev: %s, szavazat: %d\n", f->ertek, f->nev, f->vote);
}

int main()
{
    const char *fname = "mozik.csv";

    Film tomb[MAX];
    double elso[251];
    kivesz(fname, 251, elso);
    int elemszam = feltolt(fname, MAX, tomb);
    for (int i = 0; i < 251; i++)
    {
        // printf("%lf \n",elso[i]);
        tomb[i].ertek = elso[i];
    }
    printf("A filmek amik: tobb mint fel millio szavazatot kaptak:\n");
    more_than(elemszam, tomb);
    return 0;
}