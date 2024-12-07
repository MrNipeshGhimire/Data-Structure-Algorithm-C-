#include<stdio.h>
#include<conio.h>

void SelectionSort(int arr[], int lower, int upper)
{
	int i,temp,small,j;
	
	for(i=lower; i<upper; i++)
	{
		small=i;
		for(j=i+1; j<upper; j++)
		{
			if(arr[small]>arr[j])
			{
				small=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[small];
		arr[small]=temp;
	}
}
void main(){
  int  i,n=7;	
     
   int arr[]={7,6,5,4,3,2,1};
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
