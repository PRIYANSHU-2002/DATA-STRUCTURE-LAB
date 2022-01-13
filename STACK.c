/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <conio.h>
int stack[5];
int top = -1;

/*------------------------------------------------- Function Declarations ------------------------------------------------------*/

// Declaring isFull function

void isFull()
{
    if (top==4)
    {
        printf("The stack is full.\n");
    }
    else
    {
        printf("The stack is not full.\n");
    }
}


// Declaring isEmpty function

void isEmpty()
{
    if (top==-1)
    {
        printf("The stack is empty.\n");
    }
    else
    {
        printf("The stack is not empty.\n");
    }
}


// Declaring peek function

void peek()
{
    if(top==-1)
    {
        printf("The stack is empty.\n");
    }
    else
    {
        printf("The top element is %d",stack[top]);
    }
}


// Declaring display function

void display()
{
    if (top==-1)
    {
        printf("The stack is empty.\n");
    }
    else
    {
        int i;
        for(i=top;i>=0;i--)
        {
            printf("%d \t",stack[i]);
        }
        printf("\n");
    
    }
}


// Declaring push function

void push()
{
    if ( top==4 )
    {
        printf("Overflow condition.\n");
    }
    else
    {
        top++;   // Incrementing top by 1 index
        printf("Enter the number that you want to insert in the stack \n");
        scanf("%d",&stack[top]);
        printf("%d inserted successfully in stack.\n",stack[top]);
        printf("The stack after pushing the given value :-\n");
        display();
    }
}


// Declaring pop function

void pop()
{
    if(top==-1)
    {
        printf("Underflow condition.\n");
    }
    else
    {
        int p=stack[top];
        printf("The popped element is %d",p);
        top--;                  // Decrementing the top by 1 index
        printf("The stack after popping is :-\n");
        display();
    }
}

/*---------------------------------------------------- Main Function ----------------------------------------------------------*/

void main()
{
    int a ;
    
    printf("Calling push function to insert some elements\n");
    push();
    push();
    push();
    
    printf("Please select any of the following options by entering the number corresponding to that option.\n\n");
    printf("1. To check if the stack is full or not\n");
    printf("2. To check if the stack is empty or not\n");
    printf("3. To push an element in the stack\n");
    printf("4. To pop an element from the stack\n");
    printf("5. To display the topmost element of the stack\n");
    printf("6. To display the complete stack\n");
    

    scanf("%d",&a);
    switch(a)
    {
        case 1:
        isFull();
        break;
        
        case 2:
        isEmpty();
        break;
        
        case 3:
        push();
        break;
        
        case 4:
        pop();
        break;
        
        case 5:
        peek();
        break;
        
        case 6:
        display();
        break;
        
        default:
        printf("Please enter a valid number.\n");
        break;
    }
    
}
    
