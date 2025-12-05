#include <stdio.h>

int main()
{
    char name[50];
    char full_name[100];

    printf("Enter your name: ");
    scanf("%s", name);   
    printf("%s\n", name);

    getchar(); 

    printf("Enter your full name: ");
    scanf("%[^\n]", full_name); 
    printf("\n%s", full_name);

    return 0;
}
