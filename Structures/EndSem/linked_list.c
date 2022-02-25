#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct sr
{
    struct sr *prev;
    char *name;
    int marks;
    struct sr *next;
}student_record;

student_record *HEAD=NULL,*TAIL=NULL;

void readNames()
{
    student_record *srecord;
    int t=5;
    while(t--)
    {
        srecord=(student_record *)malloc(sizeof(student_record));
        srecord->prev=TAIL;
        char tempname[100];
        scanf("%s",tempname);
        scanf("%d",&(srecord->marks));
        srecord->name = (char *)malloc(strlen(tempname)+1);
        strcpy(srecord->name,tempname);
    /*  if(HEAD!=NULL)
            TAIL->next=srecord;*/
        if(HEAD==NULL)
            HEAD=srecord;
        else
            TAIL->next=srecord;
        TAIL=srecord;
    }
    TAIL->next=NULL;
}
void printNames()
{
    int temp=5;
    
    // for(student_record *curNode = HEAD;curNode!=NULL;curNode=curNode->next)
    printf("current\t\t\tprev\t\t\tnext\n");
    printf("=============================================================\n");
    // student_record *curNode = TAIL;
    student_record *curNode = HEAD;
    while (temp--)
    {  
        printf("%s%5d \t\t", curNode->name, curNode->marks);
        if((curNode->prev)==NULL)
        {
            printf("NULL\t\t\t");
        }
        if((curNode->prev)!=NULL)
            printf("%s%5d\t\t", (curNode->prev)->name, (curNode->prev)->marks);

        if((curNode->next)==NULL)
        {
            printf("NULL\n");
        }
        if((curNode->next)!=NULL)
            printf("%s%5d\n", (curNode->next)->name, (curNode->next)->marks);
        // curNode=curNode->prev;
        curNode=curNode->next;
    }
    printf("=============================================================\n");
}

int main()
{
    readNames();
    printNames();
}