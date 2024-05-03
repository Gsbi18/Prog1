#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "prog1.h"

#define DB 100
int randint(int lo, int hi)
{
    return lo + (rand() % (hi - lo + 1));
}
void make_file(string File_Name)
{
    string file_name = File_Name;

    FILE *fp = fopen(file_name, "w");
    if (fp == NULL)
    {
        puts("Error! Try again!");
        exit(1);
    }
    for (int i = 0; i < DB; i++)
    {
        fprintf(fp, "%d", randint(10, 99));
        fprintf(fp, "\n");
    }

    fclose(fp);
}

int main()
{
    srand(1982);
    make_file("numbers.txt");
    return 0;
}