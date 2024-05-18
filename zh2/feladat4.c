#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFF 1000

typedef char *string;
typedef struct
{
    double ertekeles;
    string cim;
    int szavazatok;
} Film;

int feltolt(Film filmek[], int n)
{
    FILE *fp = fopen("mozik.csv", "r");
    if (fp == NULL)
    {
        fprintf(stderr, "I/O Error!!");
        exit(1);
    }
    char line[200];

    int index = 0;
    char *p;
    double ertek;
    string cim;
    int szavazat;
    while (fgets(line, BUFF, fp) != NULL)
    {
        line[strlen(line) - 1] = '\0';

        p = strtok(line, ";");
        ertek = atof(p);
        p = strtok(NULL, ";");
        cim = p;
        p = strtok(NULL, ";");
        szavazat = atoi(p);
        Film f;
        f.ertekeles = ertek;

        strcpy(f.cim, cim);
        f.szavazatok = szavazat;
        filmek[index] = f;
        index++;
    }
    fclose(fp);

    return index;
}
void print_film(Film film[], int n)
{
    for (int i = 0; i < 4; i++)
    {
        printf("Értékelés: %.2lf    Cím: %s    Szavazatok: %d\n", film->ertekeles, film->cim, film->szavazatok);
    }
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
    char line[BUFF];
    double a = 0;
    int index = 0;
    while (fgets(line, BUFF, fp) != NULL)
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
int main()
{
    Film filmek[BUFF];
    double first[BUFF];
    kivesz("mozik.csv", BUFF, first);
    int elemszam = feltolt(filmek, BUFF);
    for (int i = 0; i < 251; i++)
    {

        filmek[i].ertekeles = first[i];
    }
    printf("%d ", elemszam);
    puts("");
    print_film(filmek, BUFF);
    return 0;
}