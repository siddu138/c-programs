#include<stdio.h>
int main()
{
int num=0,i=0,sum=0;
printf("enter number to find factors");
scanf("%d",&num);
for(i=1;i<=num/2;i++)
{
           if(num%i==0)
  {
  sum=sum+i;
  }
}
if(sum==num)
{
printf("%d is perfect number",num);
}
else
{
printf("%d is not a perfect number",num);
}
}

