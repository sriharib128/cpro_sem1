#include <stdio.h>
#include <stdlib.h>
#include "node.h"

extern Node *head;//telling the compiler that head is declared else where
extern Node *HEAD;

void main(int argc, char*argv[])
{
    FILE *fp = fopen(argv[1],"r");

    //if(HEAD==NULL) ==>HEAD is static in helper.c therfore not acessible here
    if(head==NULL)
    {
        printf("Linked list printed\n");
    }
    else
    {
        printf("Something worng");
        exit(0);
    }


    int x;
    while(fscanf(fp,"%d",&x)!=EOF)
    {
        insertNode(x);
    }
    printNode();
    
    while(1)
    {
        char select;
        printf("i d s q\n > ");
        scanf("%c",&select);
        if(select=='s')
        {    
            int searchkey;
            scanf("%d",&searchkey);
            Node * ans = searchNode(searchkey);
                if(ans!=NULL)
                    printf("found %d at %p\n",searchkey,ans);
                else
                    printf("not found %d at %p\n",searchkey,ans);
        }
        else if (select == 'i')
        {
            int key;
            scanf("%d",&key);
            insertNode(key);
            printNode();
        }
        else if (select == 'd')
        {
            int key;
            scanf("%d",&key);
            deleteNode(key);
            printNode();
        }
        else if(select == 'q')
            break;
    }
}