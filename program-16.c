#include<stdio.h>
#include<string.h>

void string_copy();

void main()
{
    string_copy();
}

void string_copy()
{
    char str1[30], str2[30];

    printf("Enter String 1 :");
    scanf("%s", &str1);
    printf("Enter String 2 :");
    scanf("%s", &str2);

    strcpy(str1,str2);

    printf("string 1: %s ", str1);
    printf("\n string 2 : %s ", str2);
}
