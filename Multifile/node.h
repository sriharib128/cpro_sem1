typedef struct node_rec 
{ 
    int key;
    struct node_rec *next;
} Node;

void printNode(void);
void insertNode(int);
void deleteNode(int);
Node *searchNode(int);
//defining all function proto types

//node.h is not compiled it is just textually include in main.c and heper.c
