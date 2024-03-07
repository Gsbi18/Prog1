#include <stdio.h>

int teglap_ker(int a, int b)
{
    return 2 * (a + b);
}
int teglap_ter(int a, int b)
{
    return a * b;
}

int main()
{
    int a;
    int b;
    printf("Add meg az a oldalt: ");
    scanf("%d", &a);
    printf("Add meg a b oldalt: ");
    scanf("%d", &b);
    int ker = teglap_ker(a, b);
    int ter = teglap_ter(a, b);

    printf("A kerület: %d\n", ker);
    printf("A terület: %d\n", ter);

    return 0;
}