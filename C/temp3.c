#include<stdio.h>
int main()
{   
    int num;
    scanf("%d",&num);
    for (int i=0;i<num;i++){
        for (int j=0;j<=1;j++)
            printf("*");
        puts("");
        
    }
    
    return 0;
}