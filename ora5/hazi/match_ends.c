#include <stdio.h>
#include <string.h>
#include "../prog1.h"

int match_ends(int n, string words[])
{
    int jok = 0;
    for (int i = 0; i < n; i++)
    {
        if (strlen(words[i]) >= 2 && words[i][0] == words[i][strlen(words[i]) - 1])
        {
            jok++;
        }
    }
    return jok;
}

int main()
{
    string szavak1[] = {"aba", "xyz", "aa", "x", "bbb"};
    int szavak1_meret = 5;
    string szavak2[] = {"", "x", "xy", "xyx", "xx"};
    int szavak2_meret = 5;
    string szavak3[] = {"aaa", "be", "abc", "hello"};
    int szavak3_meret = 4;

    int jok1 = match_ends(szavak1_meret, szavak1);
    int jok2 = match_ends(szavak2_meret, szavak2);
    int jok3 = match_ends(szavak3_meret, szavak3);

    for (int i = 0; i < szavak1_meret; ++i)
    {
        puts(szavak1[i]);
    }
    printf("%d\n", jok1);
    puts(" ");
    for (int i = 0; i < szavak2_meret; ++i)
    {
        puts(szavak2[i]);
    }
    printf("%d\n", jok2);
    puts(" ");
    for (int i = 0; i < szavak3_meret; ++i)
    {
        puts(szavak3[i]);
    }
    printf("%d\n", jok3);
    puts(" ");

    return 0;
}