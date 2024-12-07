#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 100
struct stack
{
	char item[MAX];
	int tos;//top of the stack
};
void push(struct stack *s, char c)
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
		case '/':
		case '*':
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
	printf("Stack contains \n");
	for(i=0; i<=s.tos; i++)
	{
		printf("%c",s.item[i]);
	}
}
void main()
{
	char infix[MAX], symb;
	struct stack postStack, opStack;
	int i;
	postStack.tos=-1;
	opStack.tos==-1;
	printf("Enter the infix expression: ");
	gets(infix);
	for(i=0; i<strlen(infix); i++)
	{
		symb=infix[i];
		if(isalpha(symb)) //if operand push into poststack //isalpha le alphabet matra linxa
		{
		   push(&postStack, symb);	
		}else if(symb=='(')
		{
			push(&opStack, symb);
		}else if(symb==')')
		{
			while(peek(opStack)!='(')
			{
				push(&postStack, pop(&opStack)); 
				//pop all operators into postStack until '(' reached.
			}
			pop(&opStack);//remaining
		}else{
			while(opStack.tos=-1 && precedence(symb)<precedence(peek(opStack)))
			{
				push(&postStack, pop(&opStack));
				//compose all high priority operators from opStack and push into postStack
			}
			push(&opStack, symb);
			//finally push the operator into opStack
		}
	}
	while(opStack.tos!=-1)
	{
		push(&postStack, pop(&opStack));
	}
	display(postStack);
	getch();
}

