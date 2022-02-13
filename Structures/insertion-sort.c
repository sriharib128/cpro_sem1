#include <stdio.h>
#include <stdlib.h>


typedef struct node_rec {      // Two equivalent types: "struct node" is equivalent to "Node"
    int key;
    struct node_rec *next;
    // Node *next;
} Node;

Node *head = NULL;

Node *allocateNode(int key)
{
    Node * node=(Node *) malloc(sizeof(Node));
    node->key = key;
    node->next=NULL;
    return node;
}

void freeNode(Node *node)
{
    free(node);
}

// do insertion so that the list is sorted
void insertNode(int a)
{   
    
    Node *N= allocateNode(a);
    
    // inserting into empty node
    if(head==NULL)
    {   
        head = N;            
        return ;
    }
    
    Node *cnode = head;
    //inserting at the begining of the Node
    if(a < cnode->key)
    {
        head = N;
        N->next = cnode;
        return ;
    }
    
    //Inductive Case
    Node *prevnode = cnode;
    cnode = cnode->next;
    while(cnode!=NULL)
        {
            if((cnode->key >= a))
            {
                prevnode->next = N;
                N->next = cnode; 
                return;       
            }
            prevnode = cnode;
            cnode = cnode->next;
        }
    
    //inseting at the end of list
    prevnode->next = N;
    return ;
}

void deleteNode(int key)
{
    Node *prevnode = NULL;

    for(Node *cnode = head; cnode != NULL; ) {
        if(cnode->key == key) { 
            // Case 1: key is found in the first node of the list;
            if(prevnode == NULL) {
                head = cnode->next;
                freeNode(cnode);
                return;
            }
            // Case 2
            prevnode->next = cnode->next; 
            freeNode(cnode);
            return;
        }
        prevnode = cnode; 
        cnode = cnode->next;
    }
}

Node *searchNode(int key)
{
    for(Node *cnode = head; cnode != NULL; cnode = cnode->next) {
        if(cnode->key == key) 
            return cnode;
    }
    return NULL;
}
void printNode()
{   printf("==============\n");
    for(Node *cnode = head; cnode != NULL; cnode = cnode->next) 
    {
        printf("> %d\n",cnode->key);
    }
    printf("==============\n");
}

int main(int argc, char*argv[])
{
    FILE *fp = fopen(argv[1],"r");
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
    return 0;
}