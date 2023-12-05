//Write a program to concatenate the two-string using pointer.
#include <stdio.h>

void coc(char *str1, char *str2) {
    
    while (*str1) {
        str1++;
    }

    
    while (*str2) {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';  
}

int main() {
    char string1[40], string2[50];

    
    printf("Enter the first string:\n");
    gets(string1);
    printf("Enter the second string:\n");
    gets(string2);

    
    coc(string1, string2);

    
    printf("Concatenated string: %s\n", string1);

    return 0;
}

