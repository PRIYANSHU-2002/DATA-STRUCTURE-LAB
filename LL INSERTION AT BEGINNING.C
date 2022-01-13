#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node*next;
};

// Declaration of a function to traverse and print the data

void printList(struct Node * n)      /* Declaring a function with a pointer argument n*/

{
while ( n!= NULL )
{
printf("%d \t",n->data);
n=n->next;                  // Updating the pointer n to point the next item
}
}

void main()
{
struct Node*head=NULL;           // Creating three node pointers
struct Node*second=NULL;
struct Node*third=NULL;
struct Node * newnode;

clrscr();

head=(struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));       // Allocating memory
third=(struct Node*)malloc(sizeof(struct Node));
newnode=(struct Node*)malloc(sizeof(struct Node));


head->data=1;
head->next=second;
second->data=2;                   // Assigning data
second->next=third;
third->data=3;
third->next=NULL;

 // Calling the function printList
printf("Linked list is as follows:-\n");
printList(head);
printf("\n\n");

printf("Enter the number you want to insert at beginning\n");
scanf("%d",&newnode->data);
newnode->next=head;
head=newnode;
printf("After insertion at beginning :- \n");
printList(head);

getch();

}