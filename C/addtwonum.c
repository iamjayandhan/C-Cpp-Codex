#include <stdio.h>
int main()
{   
    //To add two numbers - direct method 
    int a=1,b=2,c;
    c=a+b;
    printf("sum of a and b: %d",c);
    printf("\n");
                            /*C Operators link...
                            https://www.tutorialspoint.com/cprogramming/c_operators.htm*/
    //To add two methods - input method        
    int x,y,sum=0;
    printf("Enter the two numbers: ");
    //read the 2 numbers from the user
    scanf("%d%d",&x,&y);
    sum=x+y;
    printf("sum of a and b: %d",sum);
    return 0;
}
