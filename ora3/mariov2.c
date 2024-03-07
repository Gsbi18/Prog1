#include <stdio.h>
 
int main()
{
    int magassag=0;
    printf("Add meg a fal magasságát!: ");
    scanf("%d",&magassag);
    for (int i = 1; i <= magassag; i++)
    {
        int szokoz=magassag-i;
        int teglak=i;
        for (size_t k =0; k < szokoz; k++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {  
            printf("#");
        }
        printf("\n");
    }


    return 0;
}