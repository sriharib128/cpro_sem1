# include <stdio.h>

# define NOSTUDENTS 5//COnvention to use Capitals for Macros 

void main()
{
    int A[NOSTUDENTS][NOSTUDENTS]; //2-Dimensional Arrays
    
    int sum_marks=0;

    for(int i = 0 ; i<NOSTUDENTS;i=i+1 )
    {
        for (int j =0 ; j<NOSTUDENTS;j=j+1)
        {
            scanf("%d" , &A[i][j]);
        }     
    }

    for(int i = 0 ; i<NOSTUDENTS;i=i+1 )
    {
        for (int j =0 ; j<NOSTUDENTS;j=j+1)
        {
            printf("%5d" , A[i][j]); // 5d ==> 5colums are allocated to prnt that value
        }   
        printf("\n")  ;
    }

}