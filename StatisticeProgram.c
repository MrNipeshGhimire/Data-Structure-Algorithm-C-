#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void deviationUV()
{
	int n,i,choice,A,B;
	printf("\n\nEnter the value of n : ");
	scanf("%d",&n);
	int X[n], Y[n];
	printf("\nEnter %d data of X:\n ",n);
	for( i=0; i<n; i++)
	{
		scanf("%d",&X[i]);
	}
	printf("Choose Assumed Mean: ");
	scanf("%d",&A);
	printf("\nEnter %d data of Y:\n",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&Y[i]);
	}
	printf("Choose Assumed Mean: ");
	scanf("%d",&B);
	int sum=0,su=0,sv=0,sumuv=0,usquare=0,vsquare=0;
	int tsumu=0, tsumv=0, tUsquare=0, tVsquare=0, tsumUV=0;
	printf("\n|\tX\t|\tY\t|\tu\t|\tv\t|\tu^2\t|\tv^2\t|\tuv\t|\n");
	printf("_________________________________________________________________________________________________________________");
	for(i=0; i<n; i++)
	{
		su=X[i]-A;
		sv=Y[i]-B;
		usquare=pow(su,2);
		vsquare=pow(sv,2);
		sumuv=su * sv;
	   printf("\n|\t%d\t|\t%d\t|\t%d\t|\t%d\t|\t%d\t|\t%d\t|\t%d\t|",X[i],Y[i],su,sv,usquare,vsquare,sumuv);
	   tsumu+=su;
	   tsumv+=sv;
	   tUsquare+=usquare;
	   tVsquare+=vsquare;
	   tsumUV+=sumuv;	
	}
	printf("\n_________________________________________________________________________________________________________________");
	printf("\n\t\t\t\t Eu= %d\t\t Ev= %d\t\tEu^2= %d\tEv^2= %d\tEuv= %d",tsumu,tsumv,tUsquare,tVsquare,tsumUV);
/*	int a=n*tUsquare-pow(tsumu,2);
    int b=n*tVsquare-pow(tsumv,2);
    int c=sqrt(a,2);
    int d=sqrt(b,2);
    int r= n* tsumUV-tsumu*tsumv/(c*d);
	printf("\n\nCoefficient of Regression is %d",r); */
}
void stePdeviationXY()
{
	int n,i,choice,h1,h2,A,B;
	printf("\n\nEnter the value of n : ");
	scanf("%d",&n);
	int X[n], Y[n];
	printf("\nEnter %d data of X:\n ",n);
	for( i=0; i<n; i++)
	{
		scanf("%d",&X[i]);
	}
	printf("Choose Assumed Mean: ");
	scanf("%d",&A);
	printf("\nEnter %d data of Y:\n",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&Y[i]);
	}
	printf("Choose Assumed Mean: ");
	scanf("%d",&B);
   h1=X[n-1]-X[n-2];
   h2=Y[n-1]-Y[n-2];
   int sum=0,su=0,sv=0,sumuv=0,usquare=0,vsquare=0;
	int tsumu=0, tsumv=0, tUsquare=0, tVsquare=0, tsumUV=0;
	printf("\n|\tX\t|\tY\t|\tu\t|\tv\t|\tu^2\t|\tv^2\t|\tuv\t|\n");
	printf("_________________________________________________________________________________________________________________");
	for(i=0; i<n; i++)
	{
		su=(X[i]-A)/h1;
		sv=(Y[i]-B)/h2;
		usquare=pow(su,2);
		vsquare=pow(sv,2);
		sumuv=su * sv;
	   printf("\n|\t%d\t|\t%d\t|\t%d\t|\t%d\t|\t%d\t|\t%d\t|\t%d\t|",X[i],Y[i],su,sv,usquare,vsquare,sumuv);
	   tsumu+=su;
	   tsumv+=sv;
	   tUsquare+=usquare;
	   tVsquare+=vsquare;
	   tsumUV+=sumuv;	
	}
	printf("\n_________________________________________________________________________________________________________________");
	printf("\n\t\t\t\t Eu= %d\t\t Ev= %d\t\tEu^2= %d\tEv^2= %d\tEuv= %d",tsumu,tsumv,tUsquare,tVsquare,tsumUV);
}
void deviationXY()
{
	int n,i,choice;
	printf("\n\nEnter the value of n : ");
	scanf("%d",&n);
	int x[n], y[n];
	printf("\nEnter %d data of X:\n ",n);
	for( i=0; i<n; i++)
	{
		scanf("%d",&x[i]);
	}
	printf("\nEnter %d data of Y:\n",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&y[i]);
	}
	int sum=0,sx=0,sy=0,sumxy=0;
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
	int choice;
	do{
		system("cls");
		printf("\n\n\t===SIMPLE STATISTICS PROBLEM SOLVING PROGRAM===\n\t\n\t\t1. Deviation Method\n\t\t2. Step-Deviation Method\n\t\t3. Exit program");
		printf("\n\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\n\t1.Deviation(uv)\n\t2.Deviation(xy)");
				printf("\n\nEnter your choice:");
				scanf("%d",&choice);
				switch(choice)
				{
					case 1:
						deviationUV();break;
						case 2:
							deviationXY();
				}
				break;
				case 2:
					stePdeviationXY();break;
					default:
						printf("Invalid Option given");
		}
		printf("\n\n");
		system("pause");
	}while(choice!=3);
}
