#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int selected;
char str[30], str2[20];
int a = 0, b, c = 1, character;  //varibles
int space = 0, digit = 0;
int len, i;

// Function 
void opr();
void reverseString();
void concatenateStrings();
void checkPalindrome();
void copyString();
void calculateStringLength();
void calculateCharFrequency();
void countVowelsConsonants();
void countSpacesDigits();

int main() {
    opr();  // Call the opr function
    return 0;
}

void opr() {
    printf("Main Menu\n\t1. Reverse a string\n\t2. Concatenation\n\t3. Palindrome\n\t4. Copy a string\n\t5. Length of string\n\t6. Frequency of character in a string\n\t7. Find number of vowels and consonants\n\t8. Find number of blank space and digit\n");
    printf("Please enter your choice: ");
    scanf("%d", &selected);

    switch (selected) {
        case 1:
            reverseString();
            break;
        case 2:
            concatenateStrings();
            break;
        case 3:
            checkPalindrome();
            break;
        case 4:
            copyString();
            break;
        case 5:
            calculateStringLength();
            break;
        case 6:
            calculateCharFrequency();
            break;
        case 7:
            countVowelsConsonants();
            break;
        case 8:
            countSpacesDigits();
            break;
        default:
            printf("Invalid choice\n");
            exit(1);
    }

    printf("\nDo you want to continue? (Press 1 to continue): ");
    scanf("%d", &selected);

    if (selected == 1) {
        opr();
    } else {
        exit(1);
    }
}

void reverseString() {
    printf("Please enter a string: ");
    scanf("%s", &str);
    strrev(str);
    printf("The reversed string is: %s\n", str);
}

void concatenateStrings() {
    printf("Please enter two strings\n");
    scanf("\n%s", str);
    scanf("\n%s", str2);
    strcat(str, str2);
    printf("Concatenation of strings is: %s\n", str);
}

void checkPalindrome() {
    printf("Enter a string: ");
    scanf("%s", &str);
    strcpy(str2, str);
    strrev(str2);
    if (strcmp(str, str2) == 0) {
        printf("String is palindrome\n");
    } else {
        printf("String is not palindrome\n");
    }
}

void copyString() {
    printf("\nPlease enter the string: ");
    scanf("%s", &str);
    printf("--The string you entered is: %s\n", str);
}

void calculateStringLength() {
    printf("\nEnter a string: ");
    scanf("%s", &str);
    a = strlen(str);
    printf("String length is: %d\n", a);
}

void calculateCharFrequency() {
    printf("\nEnter a string: ");
    scanf("%s", str);
    printf("\nEnter a character you want to count: ");
    scanf(" %c", &b);
    for (a = 1; str[a] != '\0'; a++) {
        if (str[a] == b) {
            c++;
        }
    }
    printf("Frequency of character is: %d\n", c);
}

void countVowelsConsonants() {
    printf("Enter a character: ");
    scanf(" %c", &character);
    switch (character) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("%c is vowel\n", character);
            break;
        default:
            printf("%c is consonant\n", character);
            break;
    }
}

void countSpacesDigits() {
    printf("Enter a string: ");
    scanf("\n%s", &str);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            digit++;
        }
        if (str[i] == ' ') {
            space++;
        }
    }
    printf("Number of blank spaces: %d\n", space);
    printf("Number of digits: %d\n", digit);
}

