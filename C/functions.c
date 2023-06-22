#include<stdio.h>
void hi()
{
    printf("hi is executed\n");
}
 
void hello()
{
    printf("Hello is executed\n");
}

int rollno()
{
    int rollno=48;
    printf("roll no is executed %d\n",rollno);
    return 0;
}

void main()
{
    hi();
    rollno();
    hello();
}