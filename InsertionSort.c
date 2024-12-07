//Insertion Sort//
#include<stdio.h>
#include<conio.h>
#define MAX 10
void insertion(a[],N)
{
	int i,j,temp;
	for(i=0; i<N; i++)
	{
		temp=a[i];
		j=i-1;
		while(temp<a[j] &&j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
}
void main(){
	int n,i;
	int arr[]={2,1,5,4,3,8,7,5,9,0};
	printf("\nBefore Sorting..");
	for(i=0; i<MAX; i++)
	{
		printf("%d\t",arr[i]);
	}
	insertion(arr,MAX);
	printf("\nAfter sorting..");
	for(i=0; i<MAX; i++)
	{
		printf("%d\t",arr[i]);
	}
}
