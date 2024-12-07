#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct node{
	char name[30];
	char faculty[15];
	int roll;
	int lcode;
	char address[15];
	char bookname[20];
	int n;	
  struct node *next;//self refencial structure 
};
struct node *header;
int getData()
{
	char name[30];
	char faculty[15];
	int roll;
	int lcode;
	char address[15];
	char bookname[20];	
	char choice;
	int i,n;//for num of books
	struct node *ptrnew;
	ptrnew=(struct node*)malloc(sizeof(struct node));
	if(ptrnew==NULL)
	{
		printf("Memory Allocation Failed");
	}
	printf("Enter name of Student: ");
    fflush(stdin);
    gets(name);
	printf("Enter Roll num: ");
	//scanf("%d",ptrnew->roll);
	scanf("%d",&roll);
	printf("Enter Faculty: ");
	//gets(ptrnew->faculty);
	fflush(stdin);
	gets(faculty);
	printf("Enter Address: ");
	fflush(stdin);
	gets(address);
	printf("Enter Library code(int num only): ");
	scanf("%d",&lcode);
	printf("Do you want to lend book(Y/N):");
	scanf(" %c",&choice);
	if(choice=='Y'|| choice=='y')
	{
		printf("Enter number of books:");
		scanf("%d",&n);
		for(i=0; i<n; i++)
		{
			printf("\nEnter name of book %d: ",i+1);
			fflush(stdin);
			gets(bookname);	
			strcpy(ptrnew[i].bookname,bookname);  
		}
	}
		strcpy(ptrnew->name,name);
		ptrnew->roll=roll;
		strcpy(ptrnew->faculty,faculty);
		strcpy(ptrnew->address,address);
		ptrnew->lcode=lcode;
		ptrnew->n=n;
		ptrnew->next=NULL;	
}
void addStudentData()
{
	struct node *ptrnew;
	ptrnew=getData();
	if(header==NULL)
	{
		header=ptrnew;
		printf("Details added successfully");
	}else{
		ptrnew->next=header;
	    header=ptrnew;
	   	printf("Details added successfully");
	}
	printf("\n");
	system("pause");
}
void displayData() //display
{
	int i;
	struct node *ptrthis;
	if(header==NULL)
	{
		printf("List is Empty");
	}else{
		printf("\n\t==Student Records==");
		for(ptrthis=header; ptrthis!=NULL; ptrthis=ptrthis->next)
		{
			printf("\n\tName: %s",ptrthis->name);
			printf("\n\tRoll No: %d",ptrthis->roll);
			printf("\n\tLibrary code: %d",ptrthis->lcode);
			printf("\n\tFaculty: %s",ptrthis->faculty);
			printf("\n\tAddress: %s",ptrthis->address);
			printf("\n\tName of Books received by student:\n");
			for(i=0; i<ptrthis->n; i++)
			{
				//printf("Total N= %d",ptrthis->n);
				printf("\t\t%d.%s\n",i+1,ptrthis[i].bookname);
			}
			printf("\n");
		}
	}
	printf("\n");
	system("pause");
}
void receiveBook() //for receiving book by student
{
	struct node *ptrnew, *ptrthis;
	int code;
	if(header==NULL)
	{
		printf("List is Empty");
	}else{
		printf("Enter Library code: ");
		scanf("%d",&code);// code= library code
		ptrthis=header;
		while(ptrthis!=NULL)
		{
			ptrthis=ptrthis->next;
			if(ptrthis->lcode==code)
			{
			printf("\n\tName: %s",ptrthis->name);
			printf("\n\tRoll No: %d",ptrthis->roll);
			printf("\n\tLibrary code: %d",ptrthis->lcode);
			printf("\n\tFaculty: %s",ptrthis->faculty);
			printf("\n\tAddress: %s",ptrthis->address);
			printf("\nEnter name of Book :");
		//	gets(book);  //incomplete yaa dekhi continue garne
			}
		 }
		}
	printf("\n");
	system("pause");
	}
void main()
{
	int choice;
	do{
		system("cls");
		printf("\n\t=== STUDENT INFORMATION AND LIBRARY MANAGEMENT SYSTEM ===\n");
		printf("\n\t\t_________________________________________");
	    printf("\n\t\t\t                 \t\t");
		printf("\n\t\t|                        \t\t|");
		printf("\n\t\t|\t1. ADD STUDENT RECORD\t\t|");
		printf("\n\t\t|\t2. DISPLAY RECORD\t\t|");
		printf("\n\t\t|\t3. FOR RECEIVING BOOK\t\t|");
		printf("\n\t\t|\t4. FOR RETURNING BOOK\t\t|");
		printf("\n\t\t|\t5. UPDATE STUDENT RECORD\t|");
		printf("\n\t\t|\t6. SEARCH STUDENT RECORD\t|");
		printf("\n\t\t|\t7. DELETE STUDENT RECORD\t|");
		printf("\n\t\t|\t8. EXIT PROGRAM\t\t\t|");
		printf("\n\t\t|\t                 \t\t|");
		printf("\n\t\t_________________________________________");
		printf("\n\n\t\tEnter your choice: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				addStudentData();
				break;
				case 2:
					displayData();
					break;
					case 3:
						receiveBook();
						break;
		}
	}while(choice<5);
}
