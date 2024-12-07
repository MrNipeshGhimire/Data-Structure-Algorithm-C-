//Singly linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node {
	int info;
	struct node *next;
};
struct node *header;
struct node *getNode(int num)
{
	struct node *ptrnew;
	ptrnew=(struct node*)malloc(sizeof(struct node));
	
	if(ptrnew==NULL)
	{
		printf("Memory Allocation Failed");
	}
	ptrnew->next=NULL;
	ptrnew->info=num;
	return ptrnew;
}
void insertAtFront()
{
	int num;
	struct node *ptrnew;
	printf("Enter num: ");
	scanf("%d",&num);
	ptrnew=getNode(num);  //now we have required node to be inserted
	if(header==NULL){
		header=ptrnew;
	}else{
		ptrnew->next=header;//new node next field is set to current front node
		header=ptrnew;  //new node become front node
	}
	printf("\nItem inserted at Front");
	printf("\n");
	system("pause");
}
void insertAtRear()
{
	int num;
	struct node *ptrnew, *ptrthis;
	printf("Enter num: ");
	scanf("%d",&num);
	ptrnew=getNode(num);  //now we have required node to be inserted
	if(header==NULL)
	{
		header=ptrnew;
	}else{
		ptrthis=header;  //start from front node
		while(ptrthis->next!=NULL)
		{
			ptrthis=ptrthis->next;
		}
		ptrthis->next=ptrnew;
	}
	printf("\nItem inserted at Rear");
	printf("\n");
	system("pause");
}
// ===============Insert After================//
void insertAfter()
{
	struct node *ptrnew, *ptrthis;
	int num, key;
	if(header==NULL)
	{
		printf("Key is Empty");
	}else{
		printf("\nEnter num after which you want to insert: ");
		scanf("%d",&key);
		ptrthis=header;//start from front node
		while(ptrthis->info!=key)
		{
			ptrthis=ptrthis->next;//move to next node until next node is empty
		}
		if(ptrthis==NULL)
		{
			printf("\nKey not found");
		}
		printf("Enter num to be added: ");
		scanf("%d",&num);
		ptrnew=getNode(num);//
		ptrnew->next=ptrthis->next;
		ptrthis->next=ptrnew;
		printf("\nItem inserted after %d position",key);
	}
	printf("\n");
	system("pause");
}
//=====removing from front====
void removeFromFront()
{
	struct node *ptrthis;
	if(header==NULL)
	{
		printf("\nList is Empty");
	}else{
		ptrthis=header;
		header=header->next;
		free(ptrthis);
		printf("\nItem removed from Front");
	}
	printf("\n");
	system("pause");
}
void removeFromRear()
{
	struct node *ptrthis, *prev;
	if(header==NULL)
	{
		printf("\nList is Empty");
	}else if(header->next==NULL){
		      ptrthis=header;
		      header=NULL;
		      free(ptrthis);
	}else{
		ptrthis=header;
		while(ptrthis->next!=NULL)
		{
			prev=ptrthis;
			ptrthis=ptrthis->next;
		}
		prev->next=NULL;
		free(ptrthis);
	
	}
		printf("\nItem deleted from Rear");
	printf("\n");
	system("pause");
}
void removeAny(){
	struct node *ptrthis, *prev;
	int key;
	if(header==NULL)
	{
		printf("Nothing to remove");
	}else{
		printf("Enter number that you want to remove: ");
		scanf("%d",&key);
		ptrthis=header;
		while(ptrthis->info!=key)
		{
			prev=ptrthis;
			ptrthis=ptrthis->next;
			if(ptrthis==NULL)
			{
				printf("\nItem not found");
				return;
			}
		}
		if(ptrthis==header)  //if first node is to be removed
		{  
		    header=header->next;
		}else{
			prev->next=ptrthis->next;
			free(ptrthis);
		}
		printf(" %d Item removed",key);
	}
	printf("\n");
	system("pause");
}
void display(){
	
	struct node *ptrthis;
	if(header==NULL)
	{
		printf("List is Empty");
	}else{
		printf("\nList contains:\t");
		for(ptrthis=header; ptrthis!=NULL; ptrthis=ptrthis->next)
		{
			printf("\t%d",ptrthis->info);
		}
	}
	printf("\n");
	system("pause");
}

void main(){
	int choice;
	header=NULL; //initially list is empty
	do{
		system("cls");
		printf("\n1.Insert at Front\n2.Insert at Rear\n3.Insert After\n4.Remove from Front\n5.Remove from Rear");
		printf("\n6.Remove Any\n7.Display\n8.Exit");
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: insertAtFront();break;
			case 2: insertAtRear(); break;
			case 3: insertAfter(); break;
			case 4: removeFromFront();break;
			case 5: removeFromRear(); break;
			case 6:removeAny(); break;
			case 7:display();break;
		}
	}while(choice!=8);
}








