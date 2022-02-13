#include <stdio.h>
#include <string.h>
const int i = 400;

void str_cpy(char* A,char* B)
{
    int i=0;
    while(B[i]!='\0')
    {
        A[i]=B[i];
        i++;
    }
    A[i]='\0';
}

int str_cmp(char *A,char *B)
{   
    int i=0;
    while ( (A[i]!='\0') || (B[i]!='\0') )
    {
        if(A[i]<B[i])
            return -1;
        else if(A[i]>B[i])
            return 1;
        else if(A[i]==B[i])
            i++;
    }
    if((A[i]!='\0') && (B[i]!='\0'))
        return 0;
    else if((A[i]=='\0') && (B[i]!='\0'))
        return -1;
    else if((A[i]!='\0') && (B[i]=='\0'))
        return 1;
}

int main()
{
    char b[5][100] = {"hello"," Hi " , "World"};
    
    strcpy(b[4],"No");
    printf("%s%s%s%s%s\n",b[0],b[1],b[2],b[3],b[4]);
    
    str_cpy(&b[4][0],"bye");
    printf("%s%s%s%s%s\n",b[0],b[1],b[2],b[3],b[4]);

    char A[5][100] = {"hello"," Hell","Hello","hel"};
    
    printf("%d %d\n",str_cmp(A[1],A[2]),strcmp(A[1],A[2]) );
    printf("%d %d\n",str_cmp(A[1],A[1]),strcmp(A[1],A[1]) );
    printf("%d %d\n",str_cmp(A[2],A[1]),strcmp(A[2],A[1]) );
    printf("%d %d\n",str_cmp(A[1],A[3]),strcmp(A[1],A[3]) );

    return 0;
}