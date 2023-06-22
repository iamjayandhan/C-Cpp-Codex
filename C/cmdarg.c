#include<stdio.h>
#include<conio.h>
int main(int argc,char *argv[])
{
    int i;
    if (argc>=2)
    {
        printf("The arguments supplied are :\n");
        for(i=1;i<argc;i++)
            printf("%s",argv[i]);
    }
    else
        printf("Arguments list is empty.\n");
    return 0;
}