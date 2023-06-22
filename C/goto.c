#include<stdio.h>

int main()
{
    int num,sum=0;
    read:
    printf("Enter a number or enter 999 to exit : ");
    scanf("%d",&num);
    if (num!=999)
    {
        if (num<0)
        {
            goto read;
        }
        sum = sum + num;
        goto read;
    }
    printf("Sum of the numebers you've entered : %d",sum);
    return 0;
}