/*#include<stdio.h>
#include<conio.h>
void toh(int n,char s,char d,char i)
{
   if(n==1)//move smallest disc from source to destination
     printf("\nMove disc %d from %c to %c",n,s,d);
   else
   {
      //move top n-1 disk to intermediate pole
      //with the help of destination pole.
      toh(n-1,s,i,d);
      //move single disc from source to destination.
      printf("\nMove disc %d from %c to %c",n,s,d);
      //move all remaining disc from intermediate to distination
      //with the help of source pole
      toh(n-1,i,d,s);
   }
}
void main()
{
   int n;
   printf("How many disc do you have:");
   scanf("%d",&n);
   toh(n,'S','D','I');
   getch();
}
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("Enter n number : ");
	scanf("%d",&n);
	toh(n,S,'D','I');
	getch();
	}
	void toh(int n,char s,char d,char i)
	{
		if(n==1)
		{
			printf("\nMove disk %d from %c to %c",n,s,d);
		}else{
			toh(n-1,s,i,d);
			 printf("\nMove disk %d from %c to %c",n,s,d);
			toh(n-1,i,d,s);
		}
	}
	
	
	
	
	
	
		
