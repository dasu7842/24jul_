//Write a program to print the Fibonacci series using function.

#include<stdio.h>
void fibodarsh(int d)
{
   int a=0, b=1, c;
   while (a<=d)
   {
     printf("%d\t", a);
     c = a+b;
     a = b;
     b = c;
   }
}

int main()
{
   int d;

   printf("Enter series limit: ");
   scanf("%d", &d);

   printf("The fibonacci series is: \n");

   fibodarsh(d);

   return 0;
}
