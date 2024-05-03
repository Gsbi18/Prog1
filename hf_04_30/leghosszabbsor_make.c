#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "../prog1.h"

int randint(int lo, int hi)
{
    return lo + (rand() % (hi - lo + 1));
}

void make_file(int sor, int min, int max)
{
    char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
    string file_name = "veletlen_sorok.txt";

    FILE *fp = fopen(file_name, "w");
    if (fp == NULL)
    {
        puts("Error! Try again!");
        exit(1);
    }
    for (int i = 0; i < sor; i++)
    {
        int sor_length=randint(min, max);
        for (int i = 0; i <sor_length; i++)
        {   
            fprintf(fp, "%c", lowercase[randint(1,25)]);
        }
        fprintf(fp, "\n");
    }

    fclose(fp);
}

int main(int argc, string argv[])
{
    srand(time(NULL));
    if (argc != 4)
    {
        printf("Nem jól adtad meg a parancssori argumentumokat!\n");
        printf("A helyes mód: ./a.out <sorok száma> <min sor hossz> <max sor hossz>\n");
        exit(1);
    }
    
    int sorok = atoi(argv[1]);
    int min = atoi(argv[2]);
    int max = atoi(argv[3]);

    make_file(sorok, min, max);

    return 0;
}