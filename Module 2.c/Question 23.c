//Write a program to sort the numbers using pointer and functions
#include <stdio.h> 

void sort(int n, int* ptr) 
{ 
	int i, j, t; 

	 
	for (i = 0; i < n; i++) 
	{
		for (j = i + 1; j < n; j++) 
		{
			if (*(ptr + j) < *(ptr + i)) 
			{ 
				t = *(ptr + i); 
				*(ptr + i) = *(ptr + j); 
				*(ptr + j) = t; 
			} 
		} 
	} 

	// print the numbers 
	for (i = 0; i < n; i++) 
		printf("%d ", *(ptr + i)); 
} 

int main() 
{ 
	int n; 
printf("enter the numbers"); 
scanf("%d",n);
arr=n;
	sort(n, arr); 

	return 0; 
} 

