#include<Stdio.h>
int main()
{
	int a,b,c;
	printf("\n");
	for(a=1;a<=5;a++)
	{
		for(b=a;b<5;b++)
		{
			printf("");
		}
		for(c=1;c<=a;c++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(a=1;a<=5;++a)
	{
		for(b=2;b<=a;b++)
		{
			printf("");
		}
		for(c=a;c<=5;c++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
}
