#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[]={3,5,7,9,8,1,2};
	int i;
	printf("\nBefore Sorting...\n");
	for(i=0; i<7; i++)
	{
		printf("%d\t",arr[i]);
	}
	quickSort(arr,0,6);
	printf("\nAfter Sorting....\n");
	for(i=0; i<7; i++)
	{
		printf("%d\t",arr[i]);
	}
}
void quickSort(int arr[], int lower, int upper)
{
	int down=lower;
	int up=upper;
	int pivot=lower;
	int temp;
	if(lower<upper){
		repeat:
		while(arr[down]<=arr[pivot] && down<=upper)
		{
			down++;//increase down until larger element is not found
		}
		while(arr[up]>arr[pivot])
		{
			up--;//decrease until smller/equal element is found
		}	
		if(down<up)//if down is less than up then exchange down and up element
		{
			temp=arr[down];
			arr[down]=arr[up];
			arr[up]=temp;
			goto repeat;
		}else{
			//exchange pivot element with up element and pivot element gets its final position
			temp=arr[pivot];
			arr[pivot]=arr[up];
			arr[up]=temp;
			
			quickSort(arr,lower,up-1);//recursively sort the lower sort array
			quickSort(arr,up+1,upper);//recursively sort the upper sort array
			
		}
			
	}
}
















