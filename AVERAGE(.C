#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,average,sum=0,arr[30];  // Declaring all variables
			       // including an array named arr with size 30
clrscr();  // To clear the console
printf("For how many numbers do you want to calculate average ?\n");
scanf("%d",&n);
for (i=0;i<n;i++)    // Taking input from the user and storing it in arr
{
printf("Enter Number %d \n ",i+1);
scanf("%d",&arr[i]);
sum=sum+arr[i];      // Adding all the elements
}

average = sum/n;                       // Calculating the average
printf("Average of the %d given numbers is %d",n,average);
getch();  // To hold the output screen
}