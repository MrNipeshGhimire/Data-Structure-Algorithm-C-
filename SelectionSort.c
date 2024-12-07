#include<stdio.h>
#include<conio.h>
int getSmallest(int arr[],int lower, int upper)
{
	int i;
	int smallest=lower;
	for(i=lower+1; i<upper; i++)
	{
		if(arr[i]<arr[smallest])
		{
			smallest=i;
		}
	}
	return smallest;
}
void SelectionSort(int arr[], int lower, int upper)
{
	int i,temp,smallData;
	for(i=lower; i<upper; i++)
	{
		smallData= getSmallest(arr,i,upper);
		temp=arr[i];
		arr[i]=arr[smallData];
		arr[smallData]=temp;
	}
}
void main(){
  int  i,n=7;	
     
   int arr[]={7,5,6,3,4,2,1};
   printf("\nBefore sorting:\t");
   for(i=0; i<n; i++)
   {
   	printf("%d\t",arr[i]);
   }
   SelectionSort(arr,0,7);  //array ,lower, upper// maile ya 7 ko thau ma 6 rakhda mathiko function ma 
   // less than equals to upper lekhnu parne hunxa//
   printf("\nAfter Sorting:\t");
   for(i=0; i<n; i++)
   {
   	printf("%d\t",arr[i]);
   }
}
