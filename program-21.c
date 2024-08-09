// Write program to make a addition of two number using pointer.

#include <stdio.h>

void main() 
{
    int no1, no2, sum;
    int *ptr1, *ptr2;

    printf("Enter the first number: ");
    scanf("%d", &no1);

    printf("Enter the second number: ");
    scanf("%d", &no2);

    ptr1 = &no1;
    ptr2 = &no2;

    printf("The sum of %d and %d is: %d", *ptr1, *ptr2, sum = *ptr1 + *ptr2 );
}
