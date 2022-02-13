#include <stdio.h>
#include<string.h>
#include <stdlib.h>

#define MAX_STUDENTS 10
#define MAXNAME_SIZE 20

struct student_record {
    char *name;
    int marks;
};

void displayRecord(struct student_record s)
{
    printf("%s ==> %d\n",s.name , s.marks);
}

void managerecord()
{
    struct student_record s1;
    char tempname[MAXNAME_SIZE];
    printf("Enter Student Name and marks\n");
    scanf("%s %d",tempname , &s1.marks);

    s1.name = (char *)malloc(strlen(tempname)+1); // allocating a memory for name in heap and storing adress of heap in name pointer
    strcpy(s1.name , tempname);

    displayRecord(s1);
    free(s1.name); // memory allocated in heap at s1.name pointer is released
}

int main()
{
    managerecord();
}
/*
here the problem is that after manage record function is completed  memory allocated for s1 is distroyed ==> names and marks
but names contains only the pointer to the heap memory allocated
so we permanently lost the handle for that memory and we can never recall that memory
to avoid that we use free();
*/

/*
if we created s1 in main function ==> then at the end of program all the memory is given back to os which is not the case here
*/