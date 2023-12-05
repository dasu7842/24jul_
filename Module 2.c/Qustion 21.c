//Write program to make a addition of two number using pointer.
#include <stdio.h>
int main()
{
   int fn, sn, *a, *b, sum;

   printf("Enter two number\n");
   scanf("%d%d", &fn, &sn);

   a = &fn;
   b = &sn;

   sum = *a + *b;

   printf("addition is = %d\n", sum);

   return 0;
}
