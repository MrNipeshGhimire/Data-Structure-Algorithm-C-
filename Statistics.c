#include<stdio.h>
#include<conio.h>
#include<math.h>
int summationX(int x[], int n)
{
	int i, sum=0;
	for(i=0; i<n; i++)
	{
		sum=sum+x[i];
	}
	printf("EX=%d",sum);
	return sum;
}
int summationY(int y[], int n)
{
	int i, sum=0;
	for(i=0; i<n; i++)
	{
		sum=sum+ y[i];
	}
	printf("EY= %d",sum);
	return sum;
}
int summationXsquare(int x[], int n)
{
	int i, sum=0,s;
	printf("EX^2\n");
	for(i=0; i<n; i++)
	{
		s=pow(x[i],2);
		printf("%d\n",s);
		sum+=s;
	}
	printf("\nEX = %d",sum);
}
int summationYsquare(int y[],int n)
{
   int i, sum=0,s;
	printf("EX^2\n");
	for(i=0; i<n; i++)
	{
		s=pow(y[i],2);
		printf("%d\n",s);
		sum+=s;
	}
	printf("\nEY = %d",sum);	
}
int summationXY(int x[], int y[],int n)
{
	int i, sum=0,s;
	printf("EXY\n");
	printf("\n\t\tX\tY\tXY");
	for(i=0; i<n; i++)
	{
		s=x[i]*y[i];
	   printf("\n\t\t%d\t%d\t%d",x[i],y[i],s);   
	   sum+=s;
	}
	printf("\nEXY = %d",sum);
}
int showAllData(int x[], int y[], int n)
{
	int sum=0,i,sx=0,sy=0,sumxy=0;
	int tsumx=0, tsumy=0, tXsquare=0, tYsquare=0, tsumxy=0;
	printf("\n|\tX\t|\tY\t|\tX^2\t|\tY^2\t|\tXY\t|\n");
	printf("_________________________________________________________________________________");
	for(i=0; i<n; i++)
	{
		sx=pow(x[i], 2);
		sy=pow(y[i], 2);
		sumxy=x[i] * y[i];
	 printf("\n|\t%d\t|\t%d\t|\t%d\t|\t%d\t|\t%d\t|",x[i],y[i],sx,sy,sumxy);
	 tsumx+=x[i];
	 tsumy+=y[i];
	 tXsquare+=sx;
	 tYsquare+=sy;
	 tsumxy+=sumxy;
	}
	printf("\n_________________________________________________________________________________");
	 printf("\nEX= %d\t\tEY= %d\t\tEX^2= %d\tEY^2= %d\tEXY= %d",tsumx, tsumy, tXsquare, tYsquare, tsumxy);
}
void main()
{
	int n,i,choice;
	printf("\n\nEnter the value of n : ");
	scanf("%d",&n);
	int X[n], Y[n];
	printf("\nEnter %d data of X:\n ",n);
	for( i=0; i<n; i++)
	{
		scanf("%d",&X[i]);
	}
	printf("\nEnter %d data of Y:\n",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&Y[i]);
	}
	do{
		system("cls");
		printf("\n==Statistics Problem Solving Program==");
		printf("\n\t1. EX\n\t2. EY\n\t3. EX^2\n\t4. EY^2\n\t5. EXY\n\t6. Show All Option\n\t7. Exit");
		printf("\n Enter your choice: ");
		scanf("%d",&choice);
	switch(choice)
		{
			case 1:
				summationX(X,n);
				break;
				case 2:
					summationY(Y, n);
					break;
					case 3:
						summationXsquare(X, n);
						break;
						case 4:
							summationYsquare(Y, n);
							break;
							case 5:
								summationXY(X, Y, n);
								break;
								case 6:
									 showAllData(X, Y, n);
									 break;
								default:
									printf("Invalid option given\n");
		}
		printf("\n\n");
		system("pause");
	}while(choice!=7);
}
