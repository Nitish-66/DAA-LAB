/*WAP to rearrange the elements of an array of n integers
such that all even numbers are followed by all odd numbers.
How many different ways you can solve this problem.
Write your approaches & strategy for solving this problem.*/

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

    int *arr=(int *)malloc(n*sizeof(int));

    printf("Enter array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int i=0,j=n-1;
    while(i<j)
    {
        if(arr[i]%2==0)
            i++;
        if(arr[j]%2==1)
            j--;
        if(i<j)
        {
            swap(&arr[i],&arr[j]);
            i++;
            j--;
        }
    }

    printf("\nSorted Array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;

}