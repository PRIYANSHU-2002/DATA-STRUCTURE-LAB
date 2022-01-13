/******************************************************************************

                     MERGE SORT PROGRAM ( TAKING INPUT FROM THE USER )

*******************************************************************************/

#include <stdio.h>

/*-------------------------------------------- Function declaration ----------------------------------------------*/

void merge(int a[],int beg,int mid,int end)
{
    int i,j,k;
    int n1 = mid-beg+1;
    int n2 = end-mid;
    
    int LeftArray[n1] , RightArray[n2];
    
    
    for (int i=0;i<n1;i++)
    {
        LeftArray[i] = a[beg+i] ;
    }

    for (int j=0;j<n2;j++)
    {
        RightArray[j] = a[mid+1+j] ;
    }
    
    i=0;
    j=0;
    k=beg;
    
    while ( i<n1 && j<n2 )
    {
        if( LeftArray[i] <= RightArray[j] )
        {
            a[k] = LeftArray[i];
            i++;
        }
        else
        {
            a[k] = RightArray[j];
            j++;
        }
        k++;
    
    }
    
    while ( i < n1 )
    {
        a[k] = LeftArray[i];
        i++;
        k++;
    }
    
    while ( j < n2 )
    {
        a[k] = RightArray[j];
        j++;
        k++;
    }
}



void mergeSort(int a[] , int beg , int end)
{
    if( beg < end )
    {
        int mid = ( beg + end )/2;
        mergeSort(a , beg , mid);
        mergeSort(a , mid+1 , end);
        merge(a , beg , mid ,end);
    }
}


void printArray(int a[] , int n)
{
    int i;
    for ( i=0 ; i<n ; i++)
    {
        printf("%d \t",a[i]);
        
    }
    printf("\n");
}


/*--------------------------------------------------- Main Function ----------------------------------------------------------*/

int main()
{
    int a[20] ;
    int value ,n,i;

    
    printf("Enter the number of elements in array\n ");
    scanf("%d",&n);
    
    printf("Enter the elements of array one by one \n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    
    printf("Array before sorting :-\n");
    
    for( i=0 ; i<n ; i++)
    {
        printf("%d \t",a[i]);
    }
    printf("\n");
    
    mergeSort(a,0,n-1);
    
    printf("Array after sorting :-\n");
    printArray(a,n);
    
    return 0 ;
}
