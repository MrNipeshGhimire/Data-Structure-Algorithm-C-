#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100
struct stack
{
	char data[MAX];
	int tos; //top of the stack
};
void push(struct stack *s, int number)
{
	if(s->tos==MAX-1)
	{
		printf("Stack is full");
		exit(0);
	}else{
		s->tos++;
		s->data[s->tos]=number;
	}
}
int pop(struct stack *s)
{
	if(s->tos==-1)
	{
		printf("Stack is empty");
		getch();
		exit(0);
	}else{
		return s->data[s->tos--];
	}
}
void main()
{
	char expression[MAX],symb;
	int i, value,op1, op2;
	struct stack s;
	s.tos=-1;
	printf("Enter your expression:");
	gets(expression);
	for(i=0; i<strlen(expression); i++)
	{
		symb=expression[i];
		if(symb>=65 && symb<=90)
		{
			printf("Enter the value of %c :",symb);
			scanf("%d",&value);
			push(&s,value);
		}else{
			op2=pop(&s);
			op1=pop(&s);
			switch(symb)
			{
				case '+': value=op1 + op2; break;
				case '-': value=op1 - op2; break;
				case '*': value=op1 * op2; break;
				case '/': value=op1 / op2; break;
				case '%': value=op1 % op2; break;
				case '$': value=pow(op1 ,op2); break;
			}
			push(&s,value);
		}
	}
	printf("Value of expression is %d",pop(&s));
	getch();
}














