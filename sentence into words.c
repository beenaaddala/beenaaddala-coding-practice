#include <stdio.h>

int main()
{
    char s[100];
    int i;

    printf("enter a sentence:\n");
    fgets(s, sizeof(s), stdin);

    printf("words in a sentence are:\n");

    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == ' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c", s[i]);
        }
    }

    return 0;
}
