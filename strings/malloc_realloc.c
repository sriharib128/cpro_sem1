#include <stdio.h>
#include <string.h>

#define INIT_ESTIMATE 50
#define INCREMENTAL_SIZE 25
#define MAX_NAME_SIZE 30

char **names;

int readNames()
{
    char temp_str[MAX_NAME_SIZE];
    int nonames=0 , curr_maxsize = INIT_ESTIMATE;

    names = (char **)malloc(INIT_ESTIMATE*sizeof(char *)); // malloc gives us a chunk of memory from heap and its base adress is stores in names

    while( (scanf("%s",&temp_str))!=EOF ) //enter ctrl+D in input to get EOF
    {
        int name_length;

        if(nonames >=curr_maxsize)
        {
            curr_maxsize += INCREMENTAL_SIZE;
            names = (char **)realloc(names, curr_maxsize*sizeof(char *)); //finds an alternate place in heap and 
            //                                                  copies all the previous content in names pointer to the new location
        }

        name_length = strlen(temp_str);
        names[nonames] = (char *)malloc(name_length +1 );// names[i] is a pointer to the first character of the inputted name which is again in the heap
        strcpy(names[nonames++],temp_str);
    }

    return nonames;
}

int main()
{   
    int number = readNames();
    printf("%d",number);

    return 0;
}