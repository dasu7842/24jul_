// Write a program you have to print the Fibonacci series up to user given number.

#include <stdio.h>
int main() {
    int z, a = 0, b = 1, y, x; 
    printf("Enter the number of terms: "); 
	scanf("%d", &z);
    
    printf("\nFibonacci Series is:\n");
    
    printf ("%d\n" ,a);
    printf ("%d\n" ,b);    
    for (y=5 ; y<=z ; ++y) {
   
    x = a +b;
    a = b;
   
    printf ("%d\n" ,x);
   
    b = x;
    }
    return(0);
}
