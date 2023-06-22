#include<stdio.h>
int main()
{
    //array fib stores numbers of fibonacci series
    int i,n, fib[25];

    //initialized first element to 0
    fib[0] = 0;

    //initialized second element to 1
    fib[1] = 1;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    //loop to generate ten elements
    for (i = 2; i < n; i++) {
        //i'th element of series is equal to the sum of i-1'th element and i-2'th element.
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    printf("The fibonacci series is as follows ");
    //print all numbers in the series
    for (i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    return 0;
}

