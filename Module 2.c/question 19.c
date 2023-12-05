
 //C program to check palindrome number using recursion
 
#include <stdio.h>
#include <math.h>

int reverse(int num);
int p(int num);

int main()
{
    int num;
     printf("Enter any number: ");
    scanf("%d", &num);
    
    if(p(num) == 1)
    {
        printf("%d is palindrome number.\n", num);
    }
    else
    {
        printf("%d is NOT palindrome number.\n", num);
    }
    
    return 0;
}

int p(int num)
{
    if(num == reverse(num))//check number using condition
    {
        return 1;
    }
    
    return 0;
}


//find reverse number using recursion
int reverse(int num)
{
    int digit = (int)log10(num);
    
    
    if(num == 0)
        return 0;

    return ((num%10 * pow(10, digit)) + reverse(num/10));//maths formula
}
