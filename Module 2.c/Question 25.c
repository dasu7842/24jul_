//Write a program to read and write data from the file.
#include<stdio.h>
int main() {
    FILE *ptr;
    char string[20];
    ptr = fopen("test.txt", "a");
    
    fprintf(ptr, "darshan");
    fclose(ptr);
    ptr = fopen("hello.txt", "r");
    fscanf(ptr, "%s", &string);
    printf("%s\n", string);
    fclose(ptr);
    return 0;
}
