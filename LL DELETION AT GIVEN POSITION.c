/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

******************************************************************************/
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
	struct Node* temp;
	struct Node* temp2;
	int i=1,j=1,count=1,n;
	

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


    printf("Linked list before deletion :-\n");
	printList(head);
	printf("\n");
	
	printf("Enter the position of node which you want to delete\n ");
	scanf("%d",&n);
	
	// Counting the elements in list
	temp=head;
	while(temp->next!=0)
	{
	    count=count+1;
	    temp=temp->next;
	}
	
	
if(n>count)
{
    printf("Invalid position.\n");

}

else
{
  // First pointer to point the given position

	temp=head;             // Resetting temp to head
	while( i < n )
	{
	    temp=temp->next;
	    i++;
	}
	
/*     Second pointer temp2 to point the previous node of the node to be deleted 
	   so as to store the address held by the target node in its previous node.
	   Here target node means the node to be deleted .      */
	
	
	temp2=head;
	while(j<n-1)
	{
	    temp2=temp2->next;
	    j++;
	}
	
	temp2->next=temp->next; // storing the address held by target node in its previous node
	temp->next=NULL;  // De-linking  the target node
	
	printf("Linked list after deleting given node :-\n");
	printList(head);
}

	return 0;
}
