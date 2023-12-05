#include<stdio.h>
#include<math.h>
int main()
{
   int p,r,t,si,ci;

   printf("Enter the Principal, Rate and Time\n");
   scanf("%d %d %d",&p,&r,&t);
   
   si=p*r*t/100;
   ci=p(1+r/100)t;
   
   printf("simple interest is : %d",si);
   printf("compound interest is:%d",ci);
   return 0;
}
