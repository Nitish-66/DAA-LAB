/*Write a program to rearrange the elements of an array of n
integers such that all even numbers are followed by all odd
numbers. How many different ways you can solve this problem
Write your approaches & strategy for solving this problem.*/

#include<stdio.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void EvenOdd(int arr[],int n)
{
    int j =-1;
    int i=0;

    for ( i = 0; i < n; i++)
    {
       if(arr[i]%2==0)
       {
        j++;
        swap(&arr[i],&arr[j]);
       }
    }
    
}

int main()
{
    int arr[100],i,n;
    printf("Enter the size of array : ");
    scanf("%d",&n);

    printf("\nEnter the numbers of array :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

   EvenOdd(arr,n );
   for(i=0;i<n;i++)
   {
    printf("%d ",arr[i]);
   }
   return 0;

}