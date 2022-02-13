/*
there are n steps in stairs==> 1,2,...n
you hvae 2 options ==> take a step of size 1 or size 2
from x u can go to x+1 or x+2
how many ways can u go from 1 to n
*/
#include <stdio.h>

int stairs(int x)
{
    if(x==2 || x==1) return 1;
    
    /* 
            or
    if(x==2) return 1;
    if(x==3) return 2;

            or
    if(x==1) return 1;
    if(x<=0) return 0;
    */
    
    return (stairs(x-1) + stairs(x-2));
}

int main()
{   //based on 1 to n is same as n to 1
    int n =20;
    printf("%d",stairs(n));

}