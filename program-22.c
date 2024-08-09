//  Write a program to concatenate the two-string using pointer.

#include <stdio.h>
#include <string.h>

void main()
{
    char str1[10], str2[10];
    char *st1, *st2;

    printf("Enter String 1 : ");
    scanf("%s", &str1);

    printf("Enter String 2 : ");
    scanf("%s", &str2);

    st1 = &str1;
    st2 = &str2;

    while (*st1 != '\0')
    {
        st1++;
    }

    while (*st2 != '\0')
    {
        *st1 = *st2;
        st1++;
        st2++;
    }

    *st1 = '\0';

    printf("Concatenated String: %s\n", str1); 
}
