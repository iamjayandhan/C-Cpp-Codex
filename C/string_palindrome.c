#include <stdio.h>
#include <string.h>
//void strrev(char[]);
int main(){
    char string1[20];
    int i, length;
    int flag = 0;
    
    printf("Enter a string:");
    scanf("%s", string1);
    
    length = strlen(string1);
    
    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
           }
        }

    //strrev(string1,length);
    
    if (flag) {
        printf("%s is not a palindrome", string1);
    }    
    else {
        printf("%s is a palindrome", string1);
    }
    return 0;
}
/*
void strrev(char arr[],int len)
{
    int len = strlen(arr);
    char temp;
    
    for (int i=0;i<len/2;i++)
    {
        temp = arr[i];
        arr[i] = arr[len-i-1];
        arr[len-i-1]=temp;
    }
}
*/