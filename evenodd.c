#include<stdio.h>
#include<conio.h>
int main()
{
	int n,list;
	clrscr();
	printf("\n enter last number:");
	scanf("%d",&list);
	printf("\n Even number list:\n");
	n=2;
	while(n<=list)
	{
		printf("%d",n);
		n=n+2;
	
	
	}
	printf("\n\n odd number list:\n");
	n=1;
	while(n<=list)
	{
		printf("%d",n);
		n=n+2;
	}
	getch();
}
	
