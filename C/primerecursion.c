#include<stdio.h>
#include<math.h>
int CheckPrime(int i,int num)
{
    if(num==i)
        return 0;
    else
        if(num%i==0)
            return 1;
    else{
        return CheckPrime(i+1,num);
    }
}
int main()
{
    int n,i;
    printf("Enter the N Value:");
    scanf("%d",&n);
    printf("Prime Number Between 1 to %d are: ",n);
   for(i=2;i<=n;i++)
    if(CheckPrime(2,i)==0)
        printf("%d ",i);
}