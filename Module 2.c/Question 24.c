//Write a program to read data from file.
#include<stdio.h>
void main()
{ 
   FILE *ptr;
   
   ptr=fopen("test.txt","r");//open and read file.
   
   char string[10];//create string from storing data
   
  fgets(string ,10,ptr);//get string
  
  printf("%s",string);//to print string
  
  fclose(ptr);//close file
   
}

