//stack 
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 5
struct stack
{
	int item[MAX];
	int tos;
};
void push(struct stack *s, int n)
{
	if(s->tos==MAX-1)
	{
		printf("Stack is full");
	}else{
		s->tos++;
		s->item[s->tos]=n;
		printf("Item added");
	}
}
int pop(struct stack *s)
{
	if(s->tos==-1)
	{
		printf("Stack is empty");
		return 0;
	}else{
		s->item[s->tos--];
		printf("Item deleted");
	}
}
int display(struct stack *s)
{
	int i;
	if(s->tos==-1)
	{
		printf("Stack is empty");
	//	exit(0);
   }else{
	printf("\nStack contains: \n");
	for(i=0; i<=s->tos; i++)
	{
		printf("%d\t",s->item[i]);
	}
}}
void main()
{
	struct stack s;
	int num, ch;
	s.tos=-1;
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
				
				push(&s,num); break;
				
				case 2:
					display(&s); break;
					case 3:
						pop(&s); break;
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














