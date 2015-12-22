#include <stdio.h>
#include <stdlib.h>

//Codes from the website of geeksforgeeks thx for it.
//A simple C program for traversal of a linked list.
struct Node
{
   int data ;
   struct Node* next ;	
} ;

//Function to print the contents of the Linked List 
//from the given node
void printList(struct Node* ptr)
{
   while(ptr != NULL)
   {
	  printf(" %d ",ptr->data) ;
   }
}


int main()
{

	struct Node* head = NULL ;
	struct Node* second = NULL ;
    struct Node* third = NULL ;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1 ;
    head->next = second ;

    second->data = 1 ;
    second->next = third ;

    third->data = 1 ;
    third->next = NULL ;

    printList(head) ;

    return 0;
}