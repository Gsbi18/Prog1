#include <stdio.h>
 
int duplaz(int n){
    return 2*n;
}
int myabs(int n){
    if (n<0)
    {
        return n*-1;
    }
    else return n;
    
}

int main()
{
    int res=myabs(-5);
    printf("%d\n",res);


    return 0;
}