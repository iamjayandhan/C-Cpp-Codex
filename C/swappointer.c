#include<stdio.h>
int main()
{
    int a,b;
    a=12,b=99;
    swap(&a,&b);
    printf("a=%d , b=%d",a,b);
    return 0;
}

void swap(int *p1,int *p2)
{
    int t;
    t=*p1;
    *p1=*p2;
    *p2=t;ff
}