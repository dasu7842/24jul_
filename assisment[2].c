#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int select, selected;
char str[30], str2[20];
int a = 1, b, c = 1, character;
int space = 0,
    digit = 0;
int len,i;
int opr()
{
    printf("Main Menu\n\t1Reverse a string\n\t2.Concatenation\n\t3.Palindrome\n\t4.Copy a string\n\t5.Length of string\n\t6.Frequency of character in a string\n\t7.Find number of vowels and consonants\n\t8.Find number of blank space and digit");
    printf("\nPlease enter your choice: ");
    scanf("%d", &select);
    switch (select)
    {
    case 1:
        printf(" Please enter a string : ");
        scanf("%s", &str);
        strrev(str);
        printf("The string you entered is : %s", str);
        printf("\n\n\tDo you  want continue <Press 1 to continue>  :");
        scanf("%d", &selected);
        if (selected == 1)
        {
            opr();
        }
        else
        {
            
            exit(1);
        }
        break;
    case 2:
        printf("Please enter two string\n");
        scanf("\n%s", str);
        scanf("\n%s", str2);
        strcat(str, str2);
        printf("\nconcatenation of string is : %s", str);
        printf("\n\n\tDo you want continue <Press 1 to continue>  :");
        scanf("%d", &selected);
        if (selected == 1)
        {
            opr();
        }
        else
        {
            
            exit(1);
        }

        break;
    case 3:
        printf("Enter a string : ");
        scanf("%s", &str);
        strcpy(str2, str);
        strrev(str2);
        if (strcmp(str, str2) == 0)
        {
            printf("String is palindrome");
        }
        else
        {
            printf("String is not palindrome");
        }
        printf("\n\n\tDo you want continue <Press 1 to continue>  :");
        scanf("%d", &selected);
        if (selected == 1)
        {
            opr();
        }
        else
        {
            
            exit(1);
        }
        break;
    case 4:
        printf("\nPlease enter the string : ");
        scanf("%s", &str);
        printf("\n\t--The string you entered is : %s", str);
        printf("\n\n\tDo you want continue <Press 1 to continue>  :");
        scanf("%d", &selected);
        if (selected == 1)
        {
            opr();
        }
        else
        {
            
            exit(1);
        }
        break;
    case 5:
        printf("\nEnter a string:");
        scanf("%s", &str);
        a = strlen(str);
        printf("\nstring length is:%d", a);
        printf("\n\n\tDo you want continue <Press 1 to continue>  :");
        scanf("%d", &selected);
        if (selected == 1)
        {
            opr();
        }
        else
        {
            
            exit(1);
        }
        break;
    case 6:
        printf("\nEnter a string:");
        scanf("%s", str);
        printf("\nEnter a character which you want to count:");
        scanf("%c", &b);
        for (a = 0; str[a] != '\0'; a++)
        {
            if (str[a] == b)
                c++;
        }
        printf("\nfrequency of character is:%d", c);
        printf("\n\n\tDo you want continue <Press 1 to continue>  :");
        scanf("%d", &selected);
        if (selected == 1)
        {
            opr();
        }
        else
        {
            
            exit(1);
        }
        break;
    case 7:
        printf("Enter a character : ");
        scanf(" %c", &character);

        switch (character)
        {
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
            printf("%c is vowel", character);
            break;

        default:
            printf("%c is consonent", character);
            break;
        }
        printf("\n\n\tDo you want continue <Press 1 to continue>  :");
        scanf("%d", &selected);
        if (selected == 1)
        {
            opr();
        }
        else
        {
            
            exit(1);
        }
        break;
    case 8:
       printf("enter a string:");
       scanf("\n%s",&str);
       
       for(i=0;str[i]!='\0';i++)
       {
       		 if(str[i]>='0' && str[i]<='9')
		   {
		   	digit++;
		   }
	       	  if(str[i]==' ')
	       	{
	       		space++;
			}
		  
	   }
	   printf(" \nspace of string is : %d",space);
	   printf("\ndigit is : %d",digit);
        printf("\n\n\tDo you want continue <Press 1 to continue>  :");
        scanf("%d", &selected);
        if (selected == 1)
        {
            opr();
        }
        else
        {
        	exit(0);
		}
		break;
        
    default:
        
        break;
    }
}
int main()
{

    
    
        if (a == 1)
        {
            opr();
        }

     else (a != 0);
}
