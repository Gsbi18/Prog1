#include <stdio.h>
#include <math.h>

int kor_ker(int s)
{
    return 2 * s * M_PI;
}
int kor_ter(int s)
{
    return pow(s, 2) * M_PI;
}

int main()
{
    int sugar;
    printf("Add meg a kör sugarát: ");
    scanf("%d", &sugar);

    int ker = kor_ker(sugar);
    int ter = kor_ter(sugar);

    printf("A kerület: %d\n", ker);
    printf("A terület: %d\n", ter);

    return 0;
}