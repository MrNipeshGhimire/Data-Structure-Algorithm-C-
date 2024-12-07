#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 10
#define TRUE 1
#define FALSE 0

typedef struct
{
	int roll;
	char name[20];
	char grade[20];
}student;
typedef struct
{
    student std[MAX];
	int rear;
}list;
void addStudent(list *p)
{
	student s;
    if(p->rear==MAX-1)
    {
    	printf("List is Full");
	}else{
		fflush(stdin);
		printf("\nEnter your name: ");
		gets(s.name);
		fflush(stdin);
		printf("Enter Roll No: ");
		scanf("%d",&s.roll);
		fflush(stdin);
		printf("Enter your Grade: ");
        gets(s.grade);
        p->rear++;
        p->std[p->rear]=s;
	}
	printf("\nData added");
}
void displayStudent(list *p)
{
	student s;
	int i;
	if(p->rear==-1)
	{
	 printf("List is empty");	
	}else{
		printf("\tName\t\tRoll No\t\tGrade\n");
		for(i=0; i<=p->rear; i++)
		{
			printf("\t%s\t\t%d\t\t%s\n",p->std[i].name,p->std[i].roll,p->std[i].grade);
		}
	}
}
void updateStudent(list *p)
{
	student s;
	int r,i;
	if(p->rear==-1)
	{
		printf("List is empty");
	}else{
		printf("Enter roll No to be updated: ");
		scanf("%d",&r);
		for(i=0; i<=p->rear; i++)
		{
			if(p->std[i].roll==r)
			{
				fflush(stdin);
				printf("\nName: %s\t Enter new Name: ",p->std[i].name);
				gets(p->std[i].name);
				fflush(stdin);
				printf("\nRoll No: %d\t Enter new Roll No: ",p->std[i].roll);
				scanf("%d",&p->std[i].roll);
				fflush(stdin);
				printf("\nGrade: %s\t Enter New Grade: ",p->std[i].grade);
				gets(p->std[i].grade);
					printf("\nSuccessfully Updated");
			}
		
		}
	}
}

void removeStudent(list *p)
{
   student s;
   int r, i,found=FALSE;
   if(p->rear==-1)
   {
   	printf("List is empty");
   	goto down;
	   }
	   printf("Enter Roll No to be removed: ");
	   scanf("%d",&r);	
	   for(i=0; i<=p->rear; i++)
	   {
	   	if(p->std[i].roll==r)
	   	{
	   		found=TRUE;
	   		p->std[i]=p->std[i+1];
		   }
	   }
	   if(found==TRUE)
	   {
	   	p->rear--;
	   	printf("\nItem Deleted Successfully");
	   }else{
	   	printf("Not found");
	   }
	   down:
	   getch();
}
int main()
{
   list lst;
   char ch;
   lst.rear=-1;
   do{
   	system("cls");
   	printf("\n1. Add\n2. Display\n3. update\n4. Remove\n 5. Exit\n");
   	printf("\nEnter your choice: ");
   	scanf(" %c",&ch);
   	switch(ch)
   	{
   		case '1': addStudent(&lst); break;
   		case '2': displayStudent(&lst); break;
   		case '3': updateStudent(&lst); break;
   		case '4': removeStudent(&lst); break;
   		case '5': return 0;
	   }
   	printf("\n\n");
   	 system("pause");
   }while(TRUE);
}

