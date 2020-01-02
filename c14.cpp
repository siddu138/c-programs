#include<stdio.h>
double bal=10000;
void withdraw()
{
	int amt=0;
	printf("enter withdraw amount");
	scanf("%d",&amt);
	if(amt%100==0)
	{
		if(amt<=bal && amt<=10000)
		{
			bal=bal-amt;
			printf("Avaiable bal is :%lf \n",bal);
			
		}
		else 
		{
			printf("invalid amount");
		}
	}
	else
	{
		printf("invalid amount");
	}
	
}
void deposite()
{
	int amt=0;
	printf("enter deposite amount");
	scanf("%d",&amt);
	if(amt%100==0)
	{
	
	bal=bal+amt;
	printf("Avaiable bal is :%lf \n",bal);
}
else
{
	printf("invalid amount");
}
}
void viewOptions()
{
	int opt=0;
	printf("1.Deposite \n");
		printf("2.Withdraw \n");
			printf("3.Balenquiry \n");
				printf("0.Exit \n");
 printf("Enter option");
 scanf("%d",&opt);
 switch(opt)
 {
 	case 1:
 		{
 			deposite();
 			break;
		 }
	case 2:
		{
			withdraw();
			break;
		}
	case 3:
		{
			printf("avaialable bal is %lf \n",bal);
		}
		
	default:
		{
			printf("Invalid option");
		}
}
}
void validate()
{
	int pin;
	printf("enter pin");
	scanf("%d",&pin);
	if(pin==1234)
	{
		viewOptions();
	}
	else
	{
		printf("Invalid pin");
	}
}
int main()
{
   	validate();
}
