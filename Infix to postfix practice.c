#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define MAX 100
struct stack
{
	char item[MAX];
	int tos;
};
void push(struct stack *s, int c)
{
	if(s->tos==MAX-1)
 {
 	printf("Stack is full");
 	exit(0);
 }
  s->item[++s->tos]=c;
}
char pop(struct stack *s)
{
	if(s->tos==-1)
	{
		printf("Stack is empty");
		exit(0);
	}
	return s->item[s->tos--];
}
char peek(struct stack s)
{
	if(s.tos==-1)
	{
		printf("Stack empty");
		exit(0);
	}
	return s.item[s.tos];
}
int precedence(char op)
{
	switch(op)
	{
		case '+':
			case '-':
				return 1;
	    case '*':
		case '/':
		case '%':
		         return 2;
		case '$':
		         return 3;
		default:
		  return 0;		 		 			
	}
}
void display(struct stack s)
{
	int i;
	printf("Stack contains: \n");
	for(i=0; i<=s.tos; i++)
	{
		printf(" %c",s.item[i]);
	}
}
void main()
{
	char infix[MAX], symb;
	int i;
	struct stack postStack, opStack;
	postStack.tos=-1;
	opStack.tos=-1;
	printf("Enter infix expression: ");
	gets(infix);
	for(i=0; i<strlen(infix); i++)
	{
		symb=infix[i];
		if(isalpha(symb))
		{
			push(&postStack, symb);
		}else if(symb=='(')
		{
			push(&opStack, symb);
		}else if(symb==')')
		{
			while(symb!='(')
			{
				push(&postStack, pop(&opStack));
			}
			pop(&opStack);
		}else{
			while(opStack.tos!=0 && precedence(symb)<precedence(peek(opStack)))
			{
				push(&postStack, pop(&opStack));
			}
			push(&opStack, symb);
		}
	}
	
	while(opStack.tos!=0)
	{
		push(&postStack, pop(&opStack));
	}
	display(postStack);
	getch();
}















