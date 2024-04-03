#include <stdio.h>
#include "./prog1.h"
#include <string.h>
#include <ctype.h>

int is_strong_password(string text)
{
    int small=0;
    int big=0;
    int num=0;

    for (int i = 0; i < strlen(text); i++)
    {
        if (islower(text[i]))
        {
            small=1;
        }
        if (isupper(text[i]))
        {
            big=1;
        }
        if (isalnum(text[i]))
        {
            num=1;
        }
        
    }
    return small && big && num;
    
    

}


int main()
{
    string s =get_string("Jelszo: ");
    if (is_strong_password(s))
    {
        puts("eros jelszo");
    }
    else 
    {
        puts("gyenge jelszo :(");
    }
 
    return 0;
}