#include<stdio.h>
int main()
{
	int n1,n2,n;
	printf("enter two numbers");
	scanf("%d %d",&n1,&n2);
	printf("1-addition,2-subration,3-multiplication,4-division,5-modulus\n");
	printf("enter a choice");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("%d",n1+n2);
		    break;
		case 2:
			printf("%d",n1-n2);
			break;
		case 3:
			printf("%d",n1*n2);
			break;
		case 4:
			printf("%d",n1/n2);
			break;
		case 5:
			printf("%d",n1%n2);
			break;
		default:
			printf("invalid choice");
			break;
	}
}
