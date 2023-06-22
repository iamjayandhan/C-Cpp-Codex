#include<stdio.h>
struct student
{
    char name[30];
    int regno;
    int marks[5];
    float percentage;
};

int main()
{
    int n,sum;
    float percent;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    struct student stu[n];

    for (int i=0;i<n;i++)
    {
        printf("\nEnter name : ");
        scanf("%s",&stu[i].name);
        printf("\nEnter regno : ");
        scanf("%d",&stu[i].regno);
        printf("\nEnter 5 subject marks : ");
        scanf("%d",&stu[i].marks);

        for(int j=0;stu[i].marks[j]!='\0';j++)
        {
            sum += stu[i].marks[j];
        }
        percent=sum/5;
        stu[i].percentage=percent;
    }

    for(int i=0;i<n;i++)
    {
        printf("\nName : %s regno : %d\n",stu[i].name,stu[i].regno);
    }
    return 0;
}