#include <stdio.h>
#include <math.h>

double get_double()
{
    double szam;
    printf("Adj meg a sugarát a gömbnek: ");
    scanf("%lf", &szam);
    return szam;
}
double gomb_felszin(double s)
{
    return 4 * M_PI * pow(s, 2);
}
double gomb_terfogat(double s)
{
    return (4 * M_PI / 3) * pow(s, 3);
}
int main()
{
    double szam = get_double();

    double ter = gomb_terfogat(szam);
    double fel = gomb_felszin(szam);

    printf("A térfogat: %lf\n", ter);
    printf("A felszin: %lf\n", fel);

    return 0;
}