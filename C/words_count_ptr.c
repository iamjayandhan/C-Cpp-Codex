#include <stdio.h>
int main()
{
    char str[150];   //Declare a string
    char *p;          //Declare a pointer
    int  words=0;

    printf("Enter the string: ");
    scanf("%s",str);    //Initialize the string

    p=str;
    while(*p!='\0')
    {
        words++;     //Increment consonant count
        p++;
    }
    
    printf("Number of words in the string : %d",words);
    return 0;
}