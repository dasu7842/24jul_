//Write a program to find the simple Interest .
#include<stdio.h>

int main()
{
   int p,r,t,si;//varible

   printf("Enter the Principal, Rate and Time\n");
   scanf("%d %d %d",&p,&r,&t);
   
   si=p*r*t/100;  //formula
   
   printf("simple interest is : %d",si);//to print
   return 0;
}
