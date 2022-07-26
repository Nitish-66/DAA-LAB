/*Write a program to test whether a number n, entered
through keyboard is prime or not by using different algorithms
you know for at least 10 inputs and note down the time
complexity by step/frequency count method for each algorithm
& for each input. Finally make a comparison of time
complexities found for different inputs, plot an appropriate
graph & decide which algorithm is faster.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void primeB(int n)
{
    int fact=1;
    for(int i=2;i<n;i++)
    {
        if(n%2==0)
        {
            printf("\n%d is Not Prime!",n);
            return;
        }
    }
    printf("\n%d is Prime!",n);
}


void primeH(int n)
{
    int fact=1;
    for(int i=2;i<n/2;i++)
    {
        if(n%2==0)
        {
            printf("\n%d is Not Prime!",n);
            return;
        }
    }
    printf("\n%d is Prime!",n);
}


void primeS(int n)
{
    int fact=1;
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%2==0)
        {
            printf("\n%d is Not Prime!",n);
            return;
        }
    }
    printf("\n%d is Prime!",n);
}




int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    primeB(n);
    primeH(n);
    primeS(n);

    return 0;
}