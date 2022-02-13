#include <stdio.h>

void readValue(int* ptrN) // pointer data type int* ==>ptrN holds the adress of a memory location where N is stored
{
    int temp;
    printf("Enter N");
    scanf("%d",&temp);

    *ptrN = temp; // pointer dereference

    // OR
    // scanf("%d" , ptrN); // to avoid using temp
}

void printValue(int N){
    printf("THe number is %d\n",N);
}

void main(){
    int N;
    readValue(&N);

    printValue(N);
}