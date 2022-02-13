#include <stdio.h>
#define MAXARRAY_SIZE 200

int readArray(int A[])
{
    int size=0;
    while(scanf("%d",&A[size++]) !=EOF );//scanf return number of fields it read  
                                        // ex when it reads 10 it return 1 , it reads 20 it return 1 
                                        //when we press ctrl+d it return EOF(end of file)
    return size-1;
}

int printArray(int A[], int size)
{
    printf("=====\n");
    for(int i=0;i<size;i++)
       { printf("%d\n",A[i]); A[i] = 0;}
    printf("=====\n");
}
void bubbleSortLoop(int A[],int size)
{
    int temp,swap_count =0;

while(size>1){
    for(int i=0;i<size-1;i++)
    {
        if(A[i]>A[i+1])
        {
            temp=A[i];
            A[i]=A[i+1];
            A[i+1]=temp;
            swap_count++;
        }
    }
    if(swap_count ==0)
        break;
    else{
        swap_count =0;
        size = size-1;
    }
}
}

void bubbleSortRecur(int A[],int size)
{
    int swapcount =0;
    for(int i=0;i<size-1;i++)
    {   
        if(A[i]>A[i+1])
        {
           int temp=A[i];
            A[i]=A[i+1];
            A[i+1]=temp;
            swapcount++ ;
        }
    }
    if(swapcount){
        bubbleSortRecur(A,size-1);
    }
}

int main(){
    int size,A[MAXARRAY_SIZE];
    size=readArray(A);
    bubbleSortRecur(A,size);

    printArray(A,size);
}