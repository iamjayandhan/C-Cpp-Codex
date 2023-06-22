#include<stdio.h>

void main()
{
    char name[20],gender[6];
    int age,mark_10;
    float mark_12;

    printf("Enter your name : ");
    scanf("%s",&name);
    printf("Enter your gender : ");
    scanf("%s",&gender);
    printf("Enter your age : ");
    scanf("%d",&age);
    printf("Enter your 10th mark : ");
    scanf("%d",&mark_10);
    printf("Enter your 12th mark : ");
    scanf("%f",&mark_12);
    
    printf("\nMy name is : %s",name);
    printf("\nMy gender is : %s",gender);
    printf("\nMy age is : %d",age);
    printf("\nMy 10th mark : %d",mark_10);
    printf("\nMy 12th mark : %.2f",mark_12);
}