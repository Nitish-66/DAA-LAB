//WAP  to implement bubble sort , take 3 different set of input ,for each of the case 
//count the number of comparison to reach the final sorted array.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,temp;
    printf("Enter the number of elements in an array: ");
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Original array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int swap_count=0, comparison_count=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap_count++;
            }
            comparison_count++;
        }
    }
    printf("\nSorted array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nSwap Count = %d \nComparison Count = %d",swap_count, comparison_count);
}