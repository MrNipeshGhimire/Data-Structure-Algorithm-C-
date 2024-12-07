#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *next;
};
struct node *head;
int addData()
{
	struct node *ptrnew;
	ptrnew= (struct node*)malloc(sizeof(struct node));
	int n;
	printf("Enter item: ");
	scanf("%d",&n);
	if(ptrnew==NULL)
	{
		printf("Memory Allocation Failed");
		exit(0);
	}
		ptrnew->next=NULL;
		ptrnew->info=n;
	return ptrnew;
}
void insertAtFront()
{
	struct node *ptrnew;
	ptrnew=addData();
	if(head==NULL)
	{
		head=ptrnew; //store data to head
		printf("Item added at first position");
	}else{
		ptrnew->next=head; 
		head=ptrnew;
		printf("Item added successfully at first position\n\n");
	}
	printf("\n");
	system("pause");
}
void addAtLast()
{
	struct node *ptrnew, *ptrthis; //ptrthis is temporary pointer 
	ptrnew=addData();
	if(head==NULL)
	{
		head=ptrnew; 
		printf("Item added at Last position");
	}else{
		ptrthis=head; /* head le ptrthis lai point gareko because head lai direct use garda 
	  original first ko item delete hunxa*/
		while(ptrthis->next!=NULL)
		{
			ptrthis=ptrthis->next;
		}
		ptrthis->next=ptrnew;
		printf("Item added at Last position");
	}
	printf("\n");
	system("pause");
}
void addAfterAnyItem()
{
	struct node *ptrnew, *ptrthis, *temp; 
	int item;
	printf("Enter item that you want to store after it:");
	scanf("%d",&item);
	if(head==NULL)
	{
		printf("List is Empty.At First you have to store atleast two items.");
		system("pause");
	}else{
			ptrthis=head;
			while(ptrthis!=NULL)
			{
				if(ptrthis->info==item)
				{
					temp=ptrthis->next;
					ptrthis->next=ptrnew;
					ptrnew->next=temp;
					printf("Item added");
				}
					ptrthis=ptrthis->next;
				}
			
			}
			printf("\n");
			system("pause");
	}

void display()
{
	struct node *ptrthis;
	if(head==NULL)
	{
		printf("List is Empty");
	}else{
		printf("\nList contains:\t");
		for(ptrthis=head; ptrthis!=NULL; ptrthis=ptrthis->next)
		{
			printf("%d\t",ptrthis->info);
		}
	}
	   printf("\n\n");
		system("pause");
}
void main()
{
	int choice;
	head=NULL;
	do{
		system("cls");
		printf("\n1.Add at front\n2.Add at Last\n3.Add after any position\n4.Display\n5.Exit");
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insertAtFront();
				break;
				case 4:
				display();
				break;
				   case 2:
				   	addAtLast();
				   	break;
				   	  case 3:
				   	  	addAfterAnyItem();
				   	  	break;
		}
	}while(choice<5);
	
}
