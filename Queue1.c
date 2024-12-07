//Queue1  Linear Queue 
#include<stdio.h>
#include<conio.h>
#include<string.h>
//#include<stdlib.h>
#define MAX 5
struct queue
{
	int item[MAX];
	int font;
	int rear;
};
int enqueue(struct queue *q, int n)
{
	if(q->rear==MAX-1)
	{
		printf("Queue is full");
	}else{
		q->rear++;
		//printf("Enter item: ");
	//	scanf("%d",&n);
		q->item[q->rear]=n;
		printf("Item added");
	}
}
int dequeue(struct queue *q)
{
	if(q->rear<q->font)
	{
		printf("Queue is empty");
	}else{
		q->item[q->font++];
		printf("Item deleted");
	}
}
int display(struct queue *q)
{
	int i;
		if(q->rear<q->font)
	{
		printf("Queue is empty");
	}else{
		printf("Queue contains\n");
		for(i=q->font; i<=q->rear; i++)
		{
			printf("%d\t",q->item[i]);
		}
	}
}
void main()
{
	struct queue q;
	int ch,num;
	q.font=0;
	q.rear=-1;
	
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
							exit(0);break;
					default:
					printf("Invalid option given");
					exit(0);	
		}
		printf("\n\n");
		system("pause");
		
	}while(ch!=4);
}
