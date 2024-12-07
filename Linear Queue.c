//Queue//
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 5
struct queue
{
	int item[MAX];
	int font;
	int rear;
};
void enqueue(struct queue *q, int n)
{
	if(q->rear=MAX-1)
	{
		printf("Queue is full");
		getch();
	}
	q->rear++;
	q->item[q->rear]=n;
	printf("Data added");
}
int diqueue(struct queue *q)
{
	if(q->font>q->rear)
{
	printf("Queue is Empty");
	exit(0);
	
	}	
   return	q->font++;
	//return q->item[q->font++];
}
void display(struct queue q)
{
	int i;
	for(i=q.font; i<=q.rear; i++)
	{
		printf("queue contains :\n");
		printf("%d\n",q.item[i]);
	}
}
void main()
{
	struct queue q;
	int n;
	char ch;
	q.font=0;
	q.rear=-1;
	do{
	System("cls");
		printf("1. Add\n");
		printf("2. Remove\n");
		printf("3. Display\n");
		printf("4. Exit");
		printf("\n\n");
		printf("Enter your choice: \n");
		ch=getche();
	//	scanf("%d",&ch);
		
		switch(ch)
		{
			case '1': 
			printf("Enter number: ");
			scanf("%d",&n);
			enqueue(&q,n); break;
			
			case '2': diqueue(&q);break;
			case '3': display(q); break;
			default:
				printf("Invalid option given");
		}
		
	}while(1);
	
}
