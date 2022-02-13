#include<stdio.h>

void readArray(int B[],int size) // here b itself behaves as a pointer and it occupies 8 bytes as it is a address
{
    for(int i=0;i<size;i++)
        B[i] =i;
}

void main(){
    int A[10], sum=0;

    readArray(A,10);
    for(int i=0;i<=9;++i)
        sum = sum + A[i];

    printf("sum = %d \n" , sum);

    for(int i=0;i<=9;++i)
        A[i]=0;
    readArray(&A[1],9);//this passes base adress of B[] as A[1] , therefore B[] will be from A[1] to A[9]

    for(int i=0;i<=9;++i)
        sum = sum + A[i];

    printf("sum = %d \n" , sum);
}