// Program to create a simple calculator
#include <stdio.h>

int main() 
{
    int option;
    double n1, n2;

    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\nEnter your option : ");
    scanf("%d", &option);
    printf("Enter two operands: ");
    scanf("%lf %lf",&n1, &n2);

    switch(option)
    {
        case 1:
            printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
            break;

        case 2:
            printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
            break;

        case 3:
            printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
            break;

        case 4:
            printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
            break;

        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct");
    }
    return 0;
}
