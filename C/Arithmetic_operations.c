#include <stdio.h>
void main()
{
    int a,b;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    printf("\nAddition : %d\n",a+b);
    printf("Subtraction : %d\n",a-b);
    printf("Multiplication : %d\n",a*b);
    printf("Division : %d\n",a/b);
    printf("Modulus : %d\n\n",a%b);
    //printf("Memory addr of a and b : %d & %d\n",&a,&b);
}