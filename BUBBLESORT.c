//Bubble sort method
#include<stdio.h>
#include<conio.h>

void main(){
  int arr[7], i,n=7;	
   printf("Enter %d num: ",7);
   
   for(i=0; i<7; i++)
   {
   	scanf("%d",&arr[i]);
   }
   
   printf("\nBefore sorting:\t");
   for(i=0; i<n; i++)
   {
   	printf("%d\t",arr[i]);
   }
   sorting(arr,n);
   printf("\nAfter Sorting:\t");
   for(i=0; i<n; i++)
   {
   	printf("%d\t",arr[i]);
   }
}
void sorting(int a[],int n)
{
	int i,j,temp;
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-1; j++)  //j<n-1-i this is also correct
		{
			if(a[j]>a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
}






