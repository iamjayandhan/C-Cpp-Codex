#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *ptr;
    int tot=0;
    float sum=0,avg;
    char str[100];

    ptr = fopen("rolex.txt","r");

    if(ptr==NULL)
    {
        printf("Can't open file...");
        exit(0);
    }

    while(fgets(str,sizeof(str),ptr)!=NULL)
    {
        sum += atof(str);   //atof converts string into float value.
        tot++;
    }
    avg = sum/tot;
    printf("Average of numbers : %.2f.",avg);
    return 0;
}