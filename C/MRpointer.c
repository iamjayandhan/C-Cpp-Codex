#include<stdio.h>
int main()
{
    int a=10;
    incre(&a);
    printf("The value of a after increment : %d.",a);
    return 0;
}

void incre(*a)
{
   
    *a++;

}
