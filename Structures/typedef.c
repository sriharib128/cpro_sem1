#include <stdio.h>
#include<string.h>
#include <stdlib.h>

#define MAX_STUDENTS 10
#define MAXNAME_SIZE 20

typedef struct {
    char *name;
    int marks;
}student_record;

student_record student_db[MAX_STUDENTS]; // in global data section ==> through out the duration of program

void displayRecord(student_record s)
{
    printf("%s ==> %d\n",s.name , s.marks);
}

void printStudentDB()
{
    printf("----------------");
    for(int i=0; i< MAX_STUDENTS;i++)
        printf("%s==>%d\n",student_db[i].name, student_db[i].marks);
     printf("----------------\n");
}

void readStudentDB()
{
    char tempname[MAXNAME_SIZE];

    for(int i=0; i< MAX_STUDENTS;i++)
    {
        scanf("%s %d",tempname , &student_db[i].marks);
        student_db[i].name = (char *)malloc(strlen(tempname)+1);
        strcpy(student_db[i].name,tempname);
    }
}

int main()
{
    readStudentDB();
    printStudentDB();
    return 0;
}

