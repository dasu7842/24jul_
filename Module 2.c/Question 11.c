//nested loop
#include<Stdio.h>
int main()
{
	int x,y,z;
	for(x=1;x<=10;x++)
	{
		for(y=10;y>x;y--)
		{
			printf("");
		}
		for(z=1;z<=x;z++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
	
	
	
	
	
	
	

