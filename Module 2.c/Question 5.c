//Write a Program to check the given number is prime or not prime
#include<stdio.h>

int main()
{
	
	int n,a,b=0;
	
	printf("Enter any Number:");
	scanf("%d",&n);
	
	for(a=1;a<=n;a++)
	{
		if(n%a==0)
	
	{
		b++;
	}
}

	if(b==2)
	printf("prime number");
	else
	printf("not prime number");
	
	return 0;
}
