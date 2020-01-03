#include<stdio.h>
int main()
{
	int a,b,n,m,sum=0;
	printf("enter two number:");
	scanf("%d %d",&a,&b);
	m=a;
	n=b;
	while(n>0)
	{
		if(n%2!=0)
		{
			sum=sum+m;
		}
		m=m*2;
		n=n/2;
	}
	printf("%d*%d=%d",a,b,sum);
}
