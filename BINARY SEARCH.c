/******************************************************************************

                            BINARY SEARCH PROGRAM

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
    int a[] = {11,14,25,30,40,41,52,57,70};
    int value = 40;
    int n = sizeof(a) / sizeof(a[0]);
    int result = BinarySearch(a,0,n-1,value);
    
    printf("The elemnts of the array are :-\n");
    for(int i=0 ; i<n ; i++)
    {
        printf("%d \t",a[i]);
    }
    printf("\n");
    
    printf("Element to be searched is %d \n",value);
    
    if ( result == -1 )
    {
        printf("The element does not exist in the given array.\n");
    }
    else
    {
        printf("The element is found at position %d and index %d",result,result-1);
    }
    return 0;
}