//circular linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node {
	int info;
	struct node *next;
};
struct node *header;
struct node *getNode()
{
	struct node *ptrnew;
	ptrnew= (struct node*)malloc(sizeof(struct node));
	if(ptrnew==NULL)
	{
		printf("Memory Allocation Failed");
	}
	int item;
	printf("Enter item: ");
	scanf("%d",&item);
	ptrnew->next=NULL;
	ptrnew->info=item;
    return ptrnew;
}
void insertAtFront()
{
	struct node *ptrnew;
	ptrnew=getNode();
	if(header==NULL)
	{
		header=ptrnew;
		header->next=header;
	}else{
		ptrnew->next=header->next;
		header->next=ptrnew;
	}
	printf("Item inserted at Front");
	printf("\n");
	system("pause");
}
void insertAtLast()
{
	struct node *ptrnew;
	ptrnew=getNode();
	if(header==NULL)
	{
	   header=ptrnew;
	   header->next=header;
	}else{
		ptrnew->next=header->next;
		header->next=ptrnew;
	}
	header=header->next;//
	printf("Item inserted at Last");
	printf("\n");
	system("pause");
}
void display()
{
	struct node *ptrthis;
	if(header==NULL)
	{
		printf("List is Empty");
	}else{
		ptrthis=header->next;
		printf("\nList contains:\t");
		do{
			printf("%d\t",ptrthis->info);
			ptrthis=ptrthis->next;
		}while(ptrthis!=header->next);
	}
	printf("\n");
	system("pause");
}
void main()
{
	int choice;
	header=NULL;
	do{
		system("cls");
		printf("\n1.Add at front\n2.Add at Last\n3.Add after\n4.Delete at front\n5.Delete at Last\n6.Display\n7.Exit");
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				insertAtFront();
				break;
				case 2:
					insertAtLast();
					break;
					case 6:
						display();
						break;
					
		}
	}while(choice<7);
}
