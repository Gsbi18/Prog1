#include <stdio.h>
 
int main()
{
    
    FILE *fp = fopen("szamok.txt", "r");

    fclose(fp);
    return 0;
}