#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
void peek();
int main()
{
int ch;
do
{
printf("\n 1.push");
printf("\n 2.pop");
printf("\n 3.display");
printf("\n 4.peek");
printf("\n 5.exit");
printf("\n enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
peek();
break;
case 5:
exit(0);
break;
}
}while(ch!=5);
return 0;
}
void push()
{
printf("i am inserting");
}
void pop()
{
printf("i am deleting");
}
void display()
{
printf("i am displaying");
}
void peek()
{
printf("i am at top");
}
