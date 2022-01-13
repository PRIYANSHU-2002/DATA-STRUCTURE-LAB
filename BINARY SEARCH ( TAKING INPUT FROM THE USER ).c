/******************************************************************************

                       BINARY SEARCH PROGRAM ( TAKING INPUT FROM THE USER )

*******************************************************************************/

#include <stdio.h>

/*--------------------------------------------------- Function Declaration --------------------------------------------------------*/

int BinarySearch( int a[] , int beg , int end ,int value)
{
    int mid;
    if (end>=beg)
    {
        mid = (beg+end)/2;
        
        if(a[mid]==value)
        {
            return mid+1 ;
        }
        
        else if (a[mid]<value)
        {
            return BinarySearch(a,mid+1,end,value);
        }
        
        else
        {
            return BinarySearch(a,beg,mid-1,value);
        }
    }
    return -1;
}

/*------------------------------------------------------ Main Function ----------------------------------------------------------*/

int main()
{
    int a[20] ;
    int value ,n,i;

    
    printf("Enter the number of elements in array\n ");
    scanf("%d",&n);
    
    printf("Enter the elements of array one by one in ascending order \n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    
    printf("The elemnts of the array are :-\n");
    for( i=0 ; i<n ; i++)
    {
        printf("%d \t",a[i]);
    }
    printf("\n");
    
    
    printf("Enter the element to be searched \n");
    scanf("%d",&value);
    
    int result = BinarySearch(a,0,n-1,value);     // Applying binary search
    
    if ( result == -1 )
    {
        printf("The element %d does not exist in the given array.\n",value);
    }
    else
    {
        printf("The element %d is found at position %d and index %d",value,result,result-1);
    }
    return 0;
}