# include <stdio.h>

# define NOSTUDENTS 5//COnvention to use Capitals for Macros 

void main()
{
    int marks[NOSTUDENTS];// Array 'marks' whose size is 10
    int sum_marks=0;


    for(int i = 0 ; i<NOSTUDENTS;i=i+1 ){
        scanf("%d" , &marks[i]);
        sum_marks = sum_marks + marks[i];
    
    // COMputing the sum of marks
    
    }// i is not accessible outside the for loop
    printf("sum id %f", (float) sum_marks /  NOSTUDENTS);

    // for(int i = 0 ; i<NOSTUDENTS;i=i+1 ){
    //     printf("%d" , &marks[i]);
}
// if base adress of marks[0] is 10 then base adress of marks[1] will be in 14 as each value takes 4 bytes
