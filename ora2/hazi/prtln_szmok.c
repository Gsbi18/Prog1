#include <stdio.h>

int main()
{
    int szam;
    printf("Adj meg egy számot: ");
    scanf("%d",&szam);
    if(szam%2==0){
        szam--;
    }
    for(int i=szam; i>0; i=i-2){
        printf("%d\n",i);
    }

    return 0;
}