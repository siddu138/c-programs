#include<stdio.h>
int main()
{
	int n,i,c=0;
	printf("enter a number");
	scanf("%d",&n);
	while(n>0)
	{
		n=n/10;
		c++;
	}
	printf("number of digits=%d",c);
}
