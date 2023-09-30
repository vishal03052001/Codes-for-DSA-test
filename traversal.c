#include <stdio.h>
# include <stdlib.h>
struct Node
{
    int data;
    struct Node* next;  //Node and node is different
};

void traverseLinkedList(struct Node* ptr)  
{
    while(ptr!=NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr=ptr->next;
    }
}

int main()
{
    struct Node *Head;
    struct Node *Second;
    struct Node *Third;
    struct Node *Fourth;
    struct Node *Fifth;

    Head = (struct Node *)malloc(sizeof(struct Node));
    Second = (struct Node *)malloc(sizeof(struct Node));
    Third = (struct Node *)malloc(sizeof(struct Node));
    Fourth = (struct Node *)malloc(sizeof(struct Node));
    Fifth = (struct Node *)malloc(sizeof(struct Node));


    //linking head and second node
    Head->data=7;
    Head->next=Second;
        
    //linking 2nd and 3rd node
    Second->data=8;
    Second->next=Third;
        
    //linking 3rd and 4th node
    Third->data=9;
    Third->next=Fourth;
        
    //linking 4th and 5th node
    Fourth->data=107;
    Fourth->next=Fifth;
        
    //Terminate 5th node at NULL
    Fifth->data=1234;
    Fifth->next=NULL;

    traverseLinkedList(Head);
}
