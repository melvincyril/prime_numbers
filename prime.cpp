  #include<stdio.h>
int prime_number(int,int);

int main()
{
	int num,check;
	printf("enter a number:");
	scanf("%d",&num);
	check== prime_number(num,num/2);
	if(check==1)
	{
		printf("the number is prime\n");
	}
	else
	{
		printf("the number is not prime\n");
	}
	 return 0;
}
int prime_number(int num,int i)
{
	if(i==1)
	 {
		  	 
	 return 1;
}
else
{
	if(num%i==0)
	{
		return 0;
	}
	else
	{
		return prime_number(num,i-1);
	}
}
}
