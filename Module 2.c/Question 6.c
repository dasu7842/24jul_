// Write a program user enter the 5 subject’s mark
#include<stdio.h>

int main()
{
	int math,guj,his,eng,hindi,per;
	
	printf("Enter 5 subject marks:");
	scanf("%d%d%d%d%d",&math,&guj,&his,&eng,&hindi);
	
	per=(math+guj+his+eng+hindi)/5;
	
	if(per>=75)
	{
		printf("first class\n");
	}
	else if(per>=60)
	{
	
		printf("second class");
	}
	else if(per>=50)
	{
		printf("pass class");
	}
	else if(per<50)
	{
		printf("fail");
	}
	
	return 0;
	
}


