#include <stdio.h>
#include "../prog1.h"
#include <string.h>
#include <stdlib.h>

#define MAX 1000 

int main(int argc, string argv[])
{
    char sor[MAX];
    
    FILE *fp = fopen("veletlen_sorok.txt", "r");
    if (fp==NULL)
    {
        printf("Nem sikerult megnyiti a fájlt!\n");
        exit(1);
    }
    int szamok[1000]={0};
    int i=0;
    while (fgets(sor,1000,fp)!=NULL)
    {
        sor[strlen(sor)-1]='\n';
        szamok[i]=strlen(sor)-1;
        i++;
    } 
    fclose(fp);
    int max=szamok[0];
    int index=0;
    for (int i = 0; i < 100; i++)
    {
        if (max<szamok[i])
        {
            max=szamok[i];
            index=i;
        }
        
       
    }
    printf("A leghosszabb sor a %d és %d karakter hosszu!\n",index+1,max);
    return 0;
}