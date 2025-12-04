#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char s1[100], s2[100];
    int choice;

    printf("\n 1. String length");
    printf("\n 2. String copy");
    printf("\n 3. String compare");
    printf("\n 4. String concatenation");
    printf("\n 5. String lower case");
    printf("\n 6. String upper case");
    printf("\n 7. string reverse");
    printf("\n\nSelect any option: ");
    scanf("%d", &choice);

     switch(choice)
    {
        case 1:
            printf("Enter the string: ");
            scanf(" %[^\n]", s1);
            printf("Length of the string: %lu\n", strlen(s1));
            break;

        case 2:
            printf("Enter source string: ");
            scanf(" %[^\n]", s1);
            strcpy(s2, s1);
            printf("Copied string: %s\n", s2);
            break;

        case 3:
            printf("Enter first string: ");
            scanf(" %[^\n]", s1);
            printf("Enter second string: ");
            scanf(" %[^\n]", s2);

            if(strcmp(s1, s2) == 0)
                printf("Strings are equal\n");
            else
                printf("Strings are not equal\n");
            break;

        case 4:
            printf("Enter first string: ");
            scanf(" %[^\n]", s1);
            printf("Enter second string: ");
            scanf(" %[^\n]", s2);

            strcat(s1, s2);
            printf("Concatenated string: %s\n", s1);
            break;

        case 5:
            printf("Enter a string: ");
            scanf(" %[^\n]", s1);
            for(int i = 0; s1[i] != '\0'; i++)
                s1[i] = tolower(s1[i]);
            printf("Lowercase string: %s\n", s1);
            break;

        case 6:
            printf("Enter a string: ");
            scanf(" %[^\n]", s1);
            for(int i = 0; s1[i] != '\0'; i++)
                s1[i] = toupper(s1[i]);
            printf("Uppercase string: %s\n", s1);
            break;
        case 7:
         	printf("enter string s1: ");
         	scanf(" %[^\n]", s1);
        	printf("Reverse of string: %s\n", strrev(s1));
            break;

        default:
            printf("Invalid ");
            break;
    }

    return 0;
}
