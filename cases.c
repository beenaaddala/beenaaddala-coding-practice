#include<stdio.h>
#include<string.h>

int main()
{
    char s1[50], s2[50];
    int choice;

    printf("\n 1. String length");
    printf("\n 2. String copy");
    printf("\n 3. String compare");
    printf("\n 4. String reverse");
    printf("\n 5. String concatenation");
    printf("\n 6. String lower case");
    printf("\n 7. String upper case");

    printf("\n\nSelect any option: ");
    scanf("%d", &choice);
    getchar();   

    switch(choice)
    {
        case 1:
            printf("Enter the string: ");
            scanf("%[^\n]", s1);
            printf("Length of the string: %d", strlen(s1));
            break;

        case 2:
            printf("Enter the string: ");
            scanf("%[^\n]", s1);
            strcpy(s2, s1);
            printf("Copied string is: %s", s2);
            break;

        case 3:
            printf("Enter first string: ");
            scanf("%[^\n]", s1);
            getchar();
            printf("Enter second string: ");
            scanf("%[^\n]", s2);
            if(strcmp(s1, s2) == 0)
                printf("Both strings are equal");
            else
                printf("Strings are not equal");
            break;

        case 4:
            printf("Enter the string: ");
            scanf("%[^\n]", s1);
            strrev(s1);
            printf("Reversed string: %s", s1);
            break;

        case 5:
            printf("Enter first string: ");
            scanf("%[^\n]", s1);
            getchar();
            printf("Enter second string: ");
            scanf("%[^\n]", s2);
            strcat(s1, s2);
            printf("Concatenated string: %s", s1);
            break;

        case 6:
            printf("Enter the string: ");
            scanf("%[^\n]", s1);
            strlwr(s1);
            printf("Lowercase string: %s", s1);
            break;

        case 7:
            printf("Enter the string: ");
            scanf("%[^\n]", s1);
            strupr(s1);
            printf("Uppercase string: %s", s1);
            break;

        default:
            printf("Invalid option!");
    }

    return 0;
}
