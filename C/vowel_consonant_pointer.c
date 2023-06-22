#include <stdio.h>
int main()
{
    char str[150];   //Declare a string
    char *p;          //Declare a pointer
    int  vCnt=0,cCnt=0;

    printf("Enter the string: ");
    fgets(str, 150, stdin);    //Initialize the string

    p=str;
    while(*p!='\0')
    {
        if(*p=='A' ||*p=='E' ||*p=='I' ||*p=='O' ||*p=='U'
        		||*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u')
            vCnt++;     //Increment vowel count
        else
            cCnt++;     //Increment consonant count
  

        p++;
    }

    printf("Number of Vowels in String: %d\n",vCnt);    //Print the number of vowels
    printf("Number of Consonants in String: %d",cCnt);  //Print the number of consonants
    return 0;
}