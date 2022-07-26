//WAP to find the frequency of repetition  of numbers in an array.

#include<stdio.h>

int main()
{
    int i,key,freq=0,arr[10];

    printf("Enter the numbers : ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }

   printf("ENter the number to find frequency : ");
   scanf("%d",&key);
   
   for ( i = 0; i < 10; i++)
   
      if(arr[i]==key)
      freq++;

   
   printf("frequency of %d is %d ",key,freq);
    
    return 0;
}