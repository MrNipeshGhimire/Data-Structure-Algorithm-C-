#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 5
struct queue 
{
	int item[MAX];
	int font;
	int rear;
};
int enqueue(struct queue *q)
{
	int n;
	if(q->rear==MAX-1)
	{
		printf("Queue is full");
		return 0;
	}else{
	printf("\nEnter data: ");
	scanf("%d",&n);
	q->rear++;
	q->item[q->rear]=n;
	printf("Item added");	
}
}
int dequeue(struct queue *q)
{
	if(q->font>q->rear)
	{
		printf("Queue is empty");
		return 0;
	}
	return q->item[q->font++];
	printf("Remove successfully");
}
void display(struct queue q)
{
	int i;
	if(q.rear<q.font)
	{
		printf("Queue is empty");
	
	}else{
	
	printf("\nQueue contains\n");
	
	for( i=q.font; i<=q.rear; i++)
	{
	
		printf("%d\t",q.item[i]);
	}
}
}
int main()
{
	struct queue q;
	char ch;
	int ret;
	q.font=0;
	q.rear=-1;
	do{
		system("cls");
		printf("1.Add item\n 2.Display item\n 3.Remove item\n 4.Exit");
		printf("\n\n");
		printf("Enter your choice: ");
	//	scanf("%d",&ch);
	  ch=getche();
		switch(ch)
		{
			case '1':
				enqueue(&q); break;
				case '2':
					display(q); break;
					case '3':
						ret=dequeue(&q); break;
						case '4':
							return 0;
		}
	}while(1);
	
}











