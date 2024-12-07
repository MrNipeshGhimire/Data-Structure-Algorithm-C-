#include<stdio.h>
#include<conio.h>
struct tree{
	int info;
	struct tree *left;
	struct tree *right;
};
struct tree *root;
struct tree *getNode(int num){
	struct tree *ptrnew;
	ptrnew=(struct tree*)malloc(sizeof(struct tree));
	if(ptrnew==NULL){
		printf("Memory Allocation Failed");
	}
	ptrnew->info=num;
	ptrnew->left=ptrnew->right=NULL;
	return ptrnew;
}
void insert(struct tree *ptrthis, int data)
{
	if(ptrthis==NULL)
	{
		root=getNode(data);
	}else if(ptrthis->info==data)
	{
		printf("\nDuplicate data entry");
	}else if(ptrthis->info>data) //left
	{
		if(ptrthis->left==NULL)
		{
			ptrthis->left=getNode(data);
		}else{
			insert(ptrthis->left,data);
		}
	}else{ //root vanda data large vayo vane right side tira janxa
		if(ptrthis->right==NULL)
		{
			ptrthis->right=getNode(data);
		}else{
			insert(ptrthis->right, data);
		}
	}
//	printf("\nData entered");
}
void inorder(struct tree *ptrthis)
{
	if(ptrthis!=NULL)
	{
		inorder(ptrthis->left);
		printf("%d\t",ptrthis->info);
		inorder(ptrthis->right);
	}
}
void main()
{
	int n,i;
	printf("Enter 10 numbers:\n");
	for(i=0; i<10; i++)
	{
		printf("\nEnter %d num :",i+1);
		scanf("%d",&n);
		insert(root,n);
	}
	printf("\nData entered into tree");
	printf("\nTree contains: \t");
	inorder(root);
	getch();
}









