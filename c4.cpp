#include<stdio.h>
int main()
{
	int a,b,sum=0;
	printf("enter value:");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("a+b=%d\n",sum);
	sum=a-b;
	printf("a-b=%d\n",sum);
	sum=a*b;
	printf("a*b=%d\n",sum);
	sum=a/b;
	printf("a/b=%d\n",sum);
	printf("a%b=%d\n",sum);
	return 0;
}
