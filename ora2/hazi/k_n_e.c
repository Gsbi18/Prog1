#include <stdio.h>

int main()
{
    int n1;
    int n2;
    printf("Adj meg egy számot: ");
    scanf("%d",&n1);
    printf("Adj meg egy másik számot: ");
    scanf("%d",&n2);
    if(n1<n2){
        printf("<\n");
    }
    else if(n1>n2){
        printf(">\n");
    }
    else printf("=\n");


    return 0;
}