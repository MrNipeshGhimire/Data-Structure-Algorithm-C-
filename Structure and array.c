#include<stdio.h>
#include<conio.h>
#define MAX 100
#define TRUE 1
#define FALSE 0

struct list
{
	int arr[MAX];
	int pos;
};
//for add data
  int addNumber(struct list *lst)
  {
  	int newNum;
  	if(lst->pos==MAX-1)
  	{
  		printf("List is full");
	  }else{
	  	lst->pos++;
	  	printf("Enter new number: ");
	  	scanf("%d",&newNum);
	  	lst->arr[lst->pos]=newNum;
	  	printf("\n");
	  }
  }
  //for display data
  int displayNumber(struct list *lst)
  {
  	int i;
  	if(lst->pos==-1)
  	{
  		printf("List is empty...");
  		system("pause");
	  }else{
	  	printf("\nNumbers are:");
	  	for(i=0; i<=lst->pos; i++)
	  	{
	  		printf("%d ",lst->arr[i]);
		  }
		  system("pause");
		  
	  }
  }
  /*updateNumber
  int updateNum(struct list *lst)
  {
  	if(lst->pos==MAX-1)
    {
    	printf("List are full...");
	}else{
		printf("Add new number:");
		scanf("%d",&num);
		for(i=lst->pos; i<)
	}
	
  }
  */
  //For remove number
  int removeNum(struct list *lst)
  {
  	int num,i;
  	if(lst->pos==-1)
  	{
  		printf("List is empty...");
  		system("pause");
	  }else{
	  	printf("Enter the position of number to delete: ");
	  	scanf("%d",&num);
	  	for(i=num-1; i<=lst->pos; i++)
	  	{
	  		lst->arr[i]=lst->arr[i+1];
		  }
	  	lst->pos--;
	  }
  }

void main()
{
	struct list ls;
	int choice;
	ls.pos=-1;
	do{
		system("cls");
		printf("\n1. Add Data\n 2.Display Data\n3.Update Data\n4.Remove Data\n0.Exit");
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
	//	choice=getche();
		switch(choice)
		{
			case 1:
				addNumber(&ls);
				break;
				case 2:
					displayNumber(&ls);
					break;
						case 3:
							//updateNum(&ls);
							break;
							case 4:
								removeNum(&ls);
		}
		
		
		
	    
	}while(choice!=0);
	
}
