// Write a program to find out the max number from given 10 elements of array.
#include<stdio.h>

int main()
{
	int a[10],size,i,max;
	printf("Enter array elements:");
	scanf("%d",&size);
	
	for (i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<size;i++){
		 if(a[i]>max)
		 {
		 	max=a[i];
		 }
	}
	 
	 printf("maximum number is: %d\n",max);
	 
	 return 0;
}
