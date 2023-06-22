#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *str;
	int i = 0;
	str=calloc(sizeof(char),50);
	fgets(str,50,stdin);
	while(*(str+i)!='\0')
	{
		if(*(str+i)>=97 && *(str+i)<=122)
		{
			*(str+i)=*(str+i)-32;
		}
		i++;
	}
	printf("%s",str);
	return 0;
}
