#include <stdio.h>
#include <string.h>

#define MAXARRAY_SIZE 20
#define MAXNAME_LEN 50

int readNames(char names[][MAXNAME_LEN])
{
    int nonames=0;
    while(scanf("%s",&names[nonames++][0]) != EOF );//scanf return number of fields it read  
                                        // ex when it reads 10 it return 1 , it reads 20 it return 1 
                                        //when we press ctrl+d it return EOF(end of file)
    return nonames-1;
}

int printNames(char names[][MAXNAME_LEN], int nonames)
{
    printf("=====\n");

    for(int i=0;i<nonames;i++)

       printf("%s\n",names[i]); // it keeps on continuing from base adress of names[i] till it gets a null character '\0'
                                // if for some reason the null character in the end dimension gets overwritten then it continues till it gets a '\0'
                                // the 2d array is mapped to a linear array
    
    printf("=====\n");
}

void bubbleSortRecur(char names[][MAXNAME_LEN], int nonames)
{
    int swapcount =0;
    char tempstr[MAXNAME_LEN];
    if (nonames==1)
        return ;

    for(int i=0;i<nonames-1;i++)
    {   
        if(  strcmp( &names[i][0] , &names[i+1][0]) <=0  )
            continue;

        else
        {
           strcpy(tempstr,&names[i][0]); // strcpy(tempstr , names[i])
           strcpy(&names[i][0],&names[i+1][0]);
           strcpy(&names[i+1][0],tempstr);
            swapcount++ ;
        }
    }
    if(swapcount){
        bubbleSortRecur(names,nonames-1);
    }
}

int main(){

    char names[MAXARRAY_SIZE][MAXNAME_LEN];

    int nonames=readNames(names);

    bubbleSortRecur(names,nonames);

    printNames(names,nonames);

    return 0;
}

