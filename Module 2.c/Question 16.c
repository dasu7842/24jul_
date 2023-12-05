//Write a program to copy string from one string to another string with user define function.
#include<stdio.h>

void strc(char str2[30], char str1[30]);


int main()
{
 char str1[20], str2[30];
 int i;

 printf("Enter string:\n");
 gets(str1);
 
 strc(str2, str1);
 
 printf("Copied string is: %s", str2);
 
 return 0;
}

void strc(char str2[30], char str1[20])
{
 int i;
 for(i=0;str1[i]!='\0';i++)
 {
  str2[i] = str1[i];
 }
 str2[i] = '\0';
}
