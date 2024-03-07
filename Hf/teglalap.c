#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("Add meg az a oldalt (cm): ");
    scanf("%d",&a);
    printf("Add meg a b oldalt (cm): ");
    scanf("%d",&b);
    printf("A téglalap kerülete: %d\n",2*(a+b));
    printf("A területe: %d\n",a*b);

    return 0;
}