#include <stdio.h>
#include<string.h>
#include <stdlib.h>

#define MAX_STUDENTS 10
#define MAXNAME_SIZE 20

struct student_record {
    char *name; // 8bytes
    int marks; // 4bytes
};

void displayRecord(struct student_record s)
{
    printf("%s ==> %d\n",s.name , s.marks);
}
int main()
{
    struct student_record s1;//Memory = size of integer + size of character pointer //4+8 = 12
//                             memory is allocated in activation record of main in RAM
//                             it has 2 parts name pointer and marks
    
    char tempname[MAXNAME_SIZE];
    printf("Enter Student Name and marks\n");
    scanf("%s %d",tempname , &s1.marks);

    s1.name = (char *)malloc(strlen(tempname)+1); // allocating a memory for name in heap and storing adress of heap in name pointer
    strcpy(s1.name , tempname);

    displayRecord(s1);
    
    return 0;
}