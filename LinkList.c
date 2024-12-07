//Linked List
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node* next; //self referencial structure= it holds the data of its own type
};
struct node *header;
struct node *GetNode(int num){
	struct node *ptrnew;
	ptrnew= (struct node*)malloc(sizeof(struct node));
	if(ptrnew==NULL)
	{
		printf("Memory allocation failed");
		getch();
		exit(0);
	}
 ptrnew->next=NULL;
 ptrnew->info=num;
 return ptrnew;
}
void insertAtFront()
{
	int num;
	struct node *ptrnew;
	printf("Enter a number to be added: ");
	scanf("%d",&num);
	ptrnew=GetNode(num);//now we have required node to be inserted
	if(header==NULL)
	{
		header=ptrnew;
	}else{
		ptrnew->next=header;
		header=ptrnew;
	}
	printf("Item inserted at front");
	system("pause");
}
void Display()
{
	struct node *ptrthis;
	if(header==NULL)
	{
		printf("List is empty");
	}else{
		printf("List contains\n");
		for(ptrthis=header; ptrthis!=NULL; ptrthis=ptrthis->next)
		{
			printf("%d\t",ptrthis->info);
		}	
	}
	printf("\n");
	system("pause");
}
void insertAtRear()
{
   int num;
	struct node *ptrnew,*ptrthis;
	printf("Enter a number to be added: ");
	scanf("%d",&num);
	ptrnew=GetNode(num);//now we have required node to be inserted
	if(header==NULL)
	{
		header=ptrnew;
	}else{
		ptrthis=header; //start from front node
		while(ptrthis->next!=NULL)
		{
			ptrthis=ptrthis->next;//move the next node until next node is empty
		}
					ptrthis->next=ptrnew;
		printf("Item inserted at Rear");
			system("pause");
	}
}
void insertAfter()
{
	struct node *ptrnew, *ptrthis;
	int key, flag=0;
	if(header==NULL)
	{
		printf("List is Empty");
	}else{
		ptrthis=header;
		printf("Enter num to be insert after : ");
		scanf("%d",&key);
		while(ptrthis->next!=NULL)
		{
			ptrthis=ptrthis->next;
			if(ptrthis->info==key)
			{
				flag=1;
				int num;
				printf("Enter num to be added: ");
				scanf("%d",&num);
				ptrnew=GetNode(num);
				ptrnew->next=ptrthis->next;
				ptrthis->next=ptrnew;
				printf("Item added after %d",key);
			}
		}
		if(flag==0)
		{
			printf("Not Found");
		}
	}
	printf("\n");
	system("pause");	
}
void removeFromFront()
{
	struct node *ptrthis;
	if(header==NULL)
	{
		printf("List is Empty");
	}else{
		ptrthis=header;
		header=header->next;
		free(ptrthis);
		printf("Item deleted from first");
	}
	system("pause");
}
void removeFromLast()
{
	struct node *ptrthis, *prev;
	if(header==NULL)
	{
		printf("List is Empty");
	}else if(header->next==NULL)
	{
		ptrthis=header;
	//	header=header->next;
	    header=NULL;
		free(ptrthis);
		printf("Item deleted");
		
	}else{
		ptrthis=header;
		while(ptrthis->next!=NULL)
		{
			prev=ptrthis;
			ptrthis=ptrthis->next;		
		}
		prev->next=NULL;
		free(ptrthis);
		printf("Item deleted from last");
	}
	printf("\n");
	system("pause");
}
void removeAny()
{
	struct node *ptrthis, *prev;
	int key;
	if(header==NULL)
	{
		printf("List is Empty");
	}else if(header->next==NULL)
	{
		ptrthis=header;
	//	header=header->next;
	    header=NULL;
		free(ptrthis);
		printf("Item deleted");
		
	}else{
		printf("Enter number to be delete after: ");
		scanf("%d",&key);
		ptrthis=header;
		while(ptrthis->next!=NULL)
		{
			prev=ptrthis;
			ptrthis=ptrthis->next;
			if(ptrthis->info==key)
			{
				prev->next=ptrthis->next;
				free(ptrthis);
				printf("Deleted item after %d",key);
			}
		}
	}
	
}
void main()
{
	int choice;
	header=NULL; //initially list is empty
	while(1)
	{
		system("cls");
		printf("1.Insert at front\n2.Insert at Rear\n3.Insert after\n");
		printf("4.Remove from Front\n5.Remove from Rear\n6.Remove any\n");
		printf("7.Display\n8.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
			      insertAtFront();break;
			case 2:insertAtRear();break;
			case 3:insertAfter();break;
			case 4:removeFromFront();break;
			case 5:removeFromLast();break;
			case 6: removeAny();break;
			case 7:Display();break;
			case 8:
			      exit(0);break;
			default:
				printf("Invalid choice !!");
		system("pause");		
		}
	}
}
