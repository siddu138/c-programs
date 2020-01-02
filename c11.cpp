#include<stdio.h>
int main()
{
	int n;
	printf("enter the num");
	scanf("%d",&n);
	if(n%3==0 && n%5==0)
	printf("fizzbizz");
	else if(n%3==0)
	printf("fizz");
	else if(n%5==0)
	printf("bizz");
	else
	printf("%d",n);
}
