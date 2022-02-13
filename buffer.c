#include <stdio.h>

int main()
{
    printf("going to buffer.."); // each character is added to output buffer
    fflush(stdout);// fulshes the output buffer to sceen
    
    //scanf return 0 in cases where it is expcting %d but we give input as a and it fails to convert a to int.
    //scanf return -1 when it gets EOF ==>we press ctrl+D on keyboard
    //scanf return the number of values it read succesfully until it gets an error
    //Ex scanf("%d %d %d",&a,&b,&c) and if we input 5 h 4 ===>it reads only 5 and returns 1
    return 0;
}

/* buffer is flusshed to display when

==> \n
==> Buffer full
==> fflush
==> scanf
==> At the end of program
*/