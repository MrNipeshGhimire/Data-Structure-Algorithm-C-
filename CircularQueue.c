#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 5
struct queue
{
	int item[MAX];
	int rear;
	int front;
};
int enqueue(struct queue *q, int n)
{
	if((q->rear+1)%MAX==q->front)
	{
		printf("Queue is full");
	}else{
		q->rear=(q->rear+1)%MAX;
	//	printf("Enter number: ");
	//	scanf("%d",&n);
		q->item[q->rear]=n;
		printf("\nItem added");
	}
}
int dequeue(struct queue *q)
{
	if(q->front==q->rear)
	{
		printf("Queue is empty");
	}else{
		q->front=(q->front+1)%MAX;
		printf("Item is deleted");
	}
	
}
int display(struct queue *q)
{
	int i;
	if(q->front==q->rear)
	{ 
		printf("Queue is empty");
	}else{
		printf("\nQueue contains:\n");
		for(i=(q->front+1)%MAX;i!=q->rear;i=(i+1)%MAX)
		{
			printf("%d\t",q->item[i]);
		}
		printf("%d\t",q->item[q->rear]);
	}

}
int main()
{
	struct queue q;
	int num;
	int ch;
	q.rear=MAX-1;
	q.front=MAX-1;
	
	do{
		
		system("cls");
		printf("1. Add item\n");
		printf("2. Display item\n");
		printf("3. Remove item\n");
		printf("4. Exit\n");
		printf("\nEnter your choice: ");
	     scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				printf("Enter item: ");
				scanf("%d",&num);
				enqueue(&q,num); break;
				
				case 2:
					display(&q); break;
					case 3:
						dequeue(&q); break;
						case 4:
							return 0;break;
					default:
					printf("Invalid option given");
					exit(0);	
		}
		printf("\n\n");
		system("pause");
		
	}while(ch<4);
}

