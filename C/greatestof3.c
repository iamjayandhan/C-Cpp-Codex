#include<stdio.h>
int main()
{
    int a,b,c,largest;
    printf("Enter value of a,b,c : ");
    scanf("%d %d %d",&a,&b,&c);

    largest= a>b?(a>c?a:c):(b>c?b:c);
    printf("The largest number is : %d",largest);
    return 0;
}