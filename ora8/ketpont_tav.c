#include <stdio.h>
#include <math.h>


typedef struct {
    int x;
    int y;
} Pont;

double distance(Pont p1, Pont p2)
{
    double x=p2.x-p1.x;
    double y=p2.y-p1.y;
    double d=sqrt((x*x)+(y*y));
    return d;
}


int main()
{
    Pont a = { 1, 2 };
    Pont b = { 6, 5 };

    printf("A ket pont kozti tavolsag: %lf\n", distance(a, b));

    return 0;
}