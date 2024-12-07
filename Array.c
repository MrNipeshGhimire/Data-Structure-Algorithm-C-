#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[100], ch,n,i,m, pos;
	
	do{
		system("cls");
		printf("\n\n\t\t====DBMS======");
		
		printf("\n\n\t\t1.Create Data");
		printf("\n\t\t2.Display Data");
		printf("\n\t\t3.Update Data");
		printf("\n\t\t4.Search Data");
		printf("\n\t\t5.Delete Data");
		printf("\n\t\t6.Exit");
		
		printf("\n\nEnter your choice: ");
		scanf("%d",&ch);
		
		
	switch(ch)
	{
		case 1:
			printf("How many numbers you want to add?:");
			scanf("%d",&n);
			for(i=0; i<n; i++)
			{
				printf("Enter %d number: ",i+1);
				scanf("%d",&arr[i]);
			}
			break;
			case 2:
				printf("\nYour Data are\n");
				for(i=0; i<n; i++)
				{
					printf("%d ",arr[i]);
				}
				break;
				case 3:
					printf("How many numbers you want to add?\n");
					scanf("%d",&m);
					printf("Enter numbers:\n");
					for(i=n; i<n+m; i++)
					{
						scanf("%d",&arr[i]);
					}
					n=n+m;
					break;
					case 4:
						printf("Enter the position of data:");
						scanf("%d",&pos);
						if(pos>n)
						{
							printf("There is only %d positon",n-1);
						}else{
							
								printf("Data of %d position is %d",pos,arr[pos-1]);
							}
							break;
							case 5:
								printf("Enter the position of data:");
								scanf("%d",&pos);
								if(pos>n)
								{
									printf("There are %d position only");
								}else{
									printf("%d is delete successifully...",pos);
									for(i=pos-1; i<n-1; i++)
									{
										arr[i]=arr[i+1];
									}
									n--;
							}
						
	
   }

	printf("\n\n");
	system("pause");

}while(ch!=6);
}
/*
student s;
   int r, i,found=FALSE;
   if(p->rear==-1)
   {
   	printf("List is empty");
	   }	
	   for(i=0; i<=p->rear; i++)
	   {
	   	if(found==TRUE)//if already found shift all remaining one position left
	   	{
	   		p->std[i-1]=p->std[i];
		   }else if(p->std[i].roll==r)//if found
		   {
		   	found =TRUE;
		   	printf("\nStudent removed.");
		   	printf("\nName: %s\t Roll No: %d\t Grade: %s",p->std[i].name,p->std[i].roll,p->std[i].roll);
		   }
	}
		if(found==TRUE)
		{
			p->rear--;
		}else{
			printf("Not found");
		}
*/

