#include<stdio.h>
int main()
{
	int a=0,n=1,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=(a*10)+3;
		printf("%d",a);
		if(i<n)
		printf("+");
	}
}
