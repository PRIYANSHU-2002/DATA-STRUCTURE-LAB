/******************************************************* QUEUE PROGRAM *************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct Node
{
    int data;
    struct Node * next;
};

struct Node * front = NULL;          // Pointer to the frontmost element
struct Node * rear = NULL;          // Pointer to the rearmost element


/*--------------------------------------------------- Function Declarations ------------------------------------------------------*/

void isEmpty()
{
    
    if(front==NULL && rear==NULL)        
    {
        printf("The queue is empty.\n");
    }
    else
    {
     printf("The queue is not empty.\n");   
    }
}


void display()
{

    
    if(front==NULL && rear==NULL)        // Checking if queue is empty or not
    {
        printf("The queue is empty.\n");
    }
    
    else
    {
        struct Node * temp;    // Creating temporary pointer variable to traverse the queue
        temp=front;
        while(temp != NULL)
        {
            printf("%d \t ",temp->data);
            temp=temp->next;
        }
    }
}


void enqueue()
{

    
    struct Node * newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the number that you want to insert in the queue \n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    
    if (front==NULL && rear==NULL)
    {
        front=newnode;
        rear=newnode;
    }
    
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
    
    printf("Queue after inserting %d :-\n",newnode->data);
    display();
    printf("\n");
}


void deque()
{
    if (front==NULL && rear==NULL)
    {
        printf("The queue is empty.\n");
    }
    
    else
    {
        printf("Queue before deletion :-\n");
        display();
        
        printf("\n");
        
        printf("The dequed element is %d",front->data);
        printf("\n");
        
        struct Node * temp;   /* Creating a temporary pointer variable to first element so as to have access to that element
                                 after de-linking it so as to free its space by calling this pointer in free() as parameter    */
        temp=front;
        front = front->next;  // Deleting link to the front element
        
        free(temp);        // Freeing the memory occupied by earlier front element
        
        printf("Queue after deletion:-\n");
        display();
    }
}


void frontmost()
{
    
    if(front==NULL && rear==NULL)        // Checking if queue is empty or not
    {
        printf("The queue is empty.\n");
    }
    
    else
    {
        printf("The frontmost element is %d",front->data);
    }
}


void rearmost()
{
    
  if(front==NULL && rear==NULL)        // Checking if queue is empty or not
    {
        printf("The queue is empty.\n");
    }
    
    else
    {
        printf("The reartmost element is %d",rear->data);
    }
}


/*--------------------------------------------------- Main Function -----------------------------------------------------------*/

void main()
{
    
    
    int a;
    
    printf("Calling the enqueue function to insert some elements in queue:-\n\n");
    enqueue();
    enqueue();
    enqueue();
    
    
    printf("Please select any of the following options by entering the number corresponding to that option.\n\n");
    
    printf("1. To check if the queue is empty or not.\n");
    printf("2. To enqueue an element in the queue.\n");
    printf("3. To deque an element from the queue.\n");
    printf("4. To display the frontmost element of the queue.\n");
    printf("5. To display the rearmost element of the queue.\n");
    printf("6. To display the complete queue.\n");
    

    scanf("%d",&a);
    switch(a)
    {
        case 1:
        isEmpty();
        break;
         
        case 2:
        enqueue();
        break;
        
        case 3:
        deque();
        break;
        
        case 4:
        frontmost();
        break;
        
        case 5:
        rearmost();
        break;
        
        case 6:
        display();
        break;
        
        default:
        printf("Please enter a valid number.\n");
        break;
    }
    
    
    
}
