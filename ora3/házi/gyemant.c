#include <stdio.h>

int main()
{
    int magassag;
        printf("Adj meg egy pozitív páratlan számot: ");
        scanf("%d", &magassag);
        if (magassag <= 0 || magassag % 2 == 0)
        {
            printf("Rossz számot adtál meg!\n");
            return 0;
        }

    for (int i = 1; i <= magassag / 2 + 1; i++)
    {
        int szokoz = magassag - i;
        int teglak = i;
        for (int k = 0; k < szokoz; k++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        for (int p = 0; p < i - 1; p++)
        {
            printf("#");
        }

        printf("\n");
    }

    for (int i = magassag / 2; 0 <= i; i--)
    {
        int szokoz = magassag - i;
        int teglak = i;
        for (int k = 0; k < szokoz; k++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        for (int p = 0; p < i - 1; p++)
        {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}