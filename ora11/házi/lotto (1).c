#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define szorzat 996300
#define osszeg 90

int randInt(int also, int felso)
{
    return also + (rand() % (felso - also + 1));
}

int feltolt(const int meret, int tomb[], const int also, const int felso)
{
    int counter = 0;
    while (counter != meret)
    {
        int szam = randInt(also, felso);
        int check = 0;
        for (int i = 0; i < meret; i++)
        {
            if (tomb[i] == szam)
            {
                check = 1;
            }
        }
        if (check == 0)
        {
            tomb[counter] = szam;
            counter++;
        }
    }
}

int ellenoriz(int meret, int tomb[])
{
    int sum = 0;
    int multiply = 1;
    for (int i = 0; i < meret; i++)
    {
        sum = sum + tomb[i];
        multiply = multiply * tomb[i];
    }
    if (sum == osszeg && multiply == szorzat)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void kiir(int meret, int tomb[])
{
    for (int i = 0; i < meret; i++)
    {
        printf("%d ", tomb[i]);
    }
    puts("");
}

int main()
{
    int meret = 6;
    int tomb[meret];
    do
    {
        feltolt(meret, tomb, 1, 45);
    } while (ellenoriz(meret, tomb) == 0);
    kiir(meret, tomb);

    return 0;
}