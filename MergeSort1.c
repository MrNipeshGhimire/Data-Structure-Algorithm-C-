//Merge sort//
//Bubble sort method
#include<stdio.h>
#include<conio.h>

void main(){
  int i,n=7;
   int arr[]={8,7,6,5,4,3,2};
   printf("\nBefore sorting:\t");
   for(i=0; i<n; i++)
   {
   	printf("%d\t",arr[i]);
   }
   MergeSort(arr,0,6);   //0=left 6=right index
   printf("\nAfter Sorting:\t");
   for(i=0; i<n; i++)
   {
   	printf("%d\t",arr[i]);
   }
}
void MergeSort(int A[], int l, int r)
{
	int mid;
	if(l<r)
	{
		mid= (l+r)/2;
		MergeSort(A,l,mid);
		MergeSort(A,mid+1,r);
		Merge(A,l, mid+1,r);  //final merge 
	}
}
void Merge(int A[],int l, int mid, int r)
{
	int B[7];
	int i;
	int x=l;
	int k=l;
	int y= mid;
	while(x<mid && y<=r)
	{
		if(A[x]<A[y])
		{
			B[k]=A[x];
			k++;
			x++;
		}else{
			B[k]=A[y];
			k++;
			y++;
		}
	}
	while(x<mid)
	{
		B[k]=A[x];
		k++;
		x++;
	}
	while(y<=r)
	{
		B[k]=A[y];
		k++;
		y++;
	}
	for(i=l; i<=r; i++)
	{
		A[i]=B[i];
	}
}








