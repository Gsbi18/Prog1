#include <stdio.h>
#include <math.h>

double kor_ker(int s)
{
    return 2 * s * M_PI;
}
double kor_ter(int s)
{
    return pow(s, 2) * M_PI;
}

int main()
{
    int sugar;
    printf("Add meg a kör sugarát: ");
    scanf("%d", &sugar);

    double ker = kor_ker(sugar);
    double ter = kor_ter(sugar);

    printf("A kerület: %.2lf\n", ker);
    printf("A terület: %.2lf\n", ter);

    return 0;
}