#include<stdio.h>
#include<string.h>

int main()
{
    char s1[20], s2[20];
    int choice;

    printf("\n 1. String length");
    printf("\n 2. String copy");
    printf("\n 3. String compare");
    printf("\n 4. String reverse");
    printf("\n 5. String concatenation");
    printf("\n 6. String lowercase");
    printf("\n 7. String uppercase");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    getchar();   // clear newline after choice

    switch(choice)
    {
        case 1:
            printf("Enter a string: ");
            scanf("%[^\n]", s1);
            printf("Length of the string is %d", strlen(s1));
            break;

        case 2:
            printf("Enter a string: ");
            scanf("%[^\n]", s1);
            strcpy(s2, s1);
            printf("Copied string is: %s", s2);
            break;

        case 3:
            printf("Enter string s1: ");
            scanf("%[^\n]", s1);
            getchar();
            printf("Enter string s2: ");
            scanf("%[^\n]", s2);
            printf("Comparing two strings: %d", strcmp(s1, s2));
            break;

        case 4:
            printf("Enter a string: ");
            scanf("%[^\n]", s1);
            printf("Reverse of string: %s", strrev(s1));
            break;

        case 5:
            printf("Enter string s1: ");
            scanf("%[^\n]", s1);
            getchar();
            printf("Enter string s2: ");
            scanf("%[^\n]", s2);
            printf("Concatenation: %s", strcat(s1, s2));
            break;

        case 6:
            printf("Enter a string: ");
            scanf("%[^\n]", s1);
            printf("Lowercase: %s", strlwr(s1));
            break;

        case 7:
            printf("Enter a string: ");
            scanf("%[^\n]", s1);
            printf("Uppercase: %s", strupr(s1));
            break;

        default:
            printf("Invalid choice");
    }
    
    return 0;
}

