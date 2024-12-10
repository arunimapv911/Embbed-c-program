#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter 3 numbers\r\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b)
	{
		if(a>=c)
		{
			printf("a is the greatest number");
		}
		else
		{
			printf("c is the greatest number");
		}
	}
	else
	{
		if(b>=c)
		{
			printf("b is the greatest number");
		}
		else
		{
			printf("c is the greatest number");
		}
	}
return 0;
}

