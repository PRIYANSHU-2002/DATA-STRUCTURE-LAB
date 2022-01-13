/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// A simple C program for traversal of a linked list
#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

// This function prints contents of linked list starting from
// the given node
void printList(struct Node* n)
{
	while (n != NULL) {
		printf(" %d ", n->data);
		n = n->next;
	}
}

int main()
{
	struct Node* head = NULL;
	struct Node* second = NULL;
	struct Node* third = NULL;
	struct Node* newnode;
	struct Node* temp;
	int n,i=1,count=1;
	



	// allocate 3 nodes in the heap
	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));

	head->data = 1; // assign data in first node
	head->next = second; // Link first node with second

	second->data = 2; // assign data to second node
	second->next = third;

	third->data = 3; // assign data to third node
	third->next = NULL;

    printf("Linked list before insertion :-\n");
	printList(head);
	printf("\n");
	
	temp=head;
	while(temp->next!=NULL)
	{
	    count=count+1;
	    temp=temp->next;
	}
	
	printf("enter the position after which you want to insert the node\n");
	scanf("%d",&n);
	
	if(n>count)
	{
	    printf("Invalid position.");
	}
    else
    {
     newnode = (struct Node*)malloc(sizeof(struct Node));
     printf("Enter the value that you want to insert at position %d\n",n+1);
     scanf("%d",&newnode->data);
     
     temp=head;  // Resetting the value of temp to head
     while (i<n)
     {
         temp=temp->next;
         i++;
     }
     newnode->next=temp->next;
     temp->next=newnode;
     
     printf("Linked list after insertion:- \n");
     printList(head);
   

    }
	
	return 0;
}

