#include <stdio.h>
#include <math.h>
 
int main()
{
double counter_negyzet=0;
int counter_sima=0;

for (int i = 1; i < 101; i++)
{
    counter_sima=counter_sima+i;
    counter_negyzet=pow(i,2)+counter_negyzet;
}
printf("A válasz:%.0f\n",pow(counter_sima,2)-counter_negyzet);



    return 0;
}