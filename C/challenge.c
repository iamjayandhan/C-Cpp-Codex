#include <stdio.h>
#include <limits.h>
void second_largest(const int arr[],int);
int main(){
	int arr[]={1,2,2,3};							
	int n = sizeof(arr) / sizeof(arr[0]);			
	second_largest(arr, n);
	return 0;
}
void second_largest(const int arr[], int size){
	int i, lar, sec_lar,count=0;
	if(size < 2)
	{
		printf("Atleast two elements needed!...quiting");
		return;
	}
	lar = sec_lar = INT_MIN;    //INT_MIN = -2147483648
	for(i = 0; i < size; i++){
		if (arr[i] > lar) sec_lar = lar,lar = arr[i];
        else if (arr[i] > sec_lar && arr[i]!=lar) sec_lar = arr[i];       
	}
	for (i=0;arr[i]!='\0';i++){
		if (arr[i]==sec_lar) count++;
		else continue;
	}
	(sec_lar == INT_MIN || lar==sec_lar || count>1)? printf("%d",-1) : printf("%d",sec_lar);
}

