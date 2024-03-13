#include <stdio.h>

int main()
{
    int magassag;
    printf("magassag: ");
    scanf("%d", &magassag);
    for (int i = 1; i <= magassag; i++)
    {
        int szokoz = magassag - i;
        int tegla = i;

        for (int j = 0; j < szokoz; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < tegla; k++)
        {
            printf("#");
        }
        printf("  ");
        for (int r = 0; r < tegla; r++)
        {
            printf("#");
        }
        for (int w = 0; w < szokoz; w++)
        {
            printf(" ");
        }

        printf("\n");
    }

    return 0;
}