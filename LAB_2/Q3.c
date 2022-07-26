//WAP to swap pair of elements of an array of n integers from starting.
// If n is odd, then last number will remain unchanged

#include<stdio.h>
#include<stdlib.h>

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{
    int n;
    printf("\nEnter n: ");
    scanf("%d",&n);

    int *arr=(int*)malloc(n*sizeof(int));
    printf("\nEnter array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i=i+2)
    {
        if(i<=n-2)
            swap(&arr[i],&arr[i+1]);
    }    

    printf("\nArray after swaps: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}