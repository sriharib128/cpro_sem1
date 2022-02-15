#include <stdio.h>
#include <stdlib.h>

#include "node.h"

Node *head = NULL;//here the scope of head is across all the files// it is global
static Node * HEAD = NULL; // here the scope is only to helper.c

static Node *allocateNode(int key)//we are restricting it as we are not using them in other files
{
    Node * node=(Node *) malloc(sizeof(Node));
    node->key = key;
    node->next=NULL;
    return node;
}

static void freeNode(Node *node)
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
