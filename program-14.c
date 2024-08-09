// Write a Program of find the element of given position from the array. 

#include<stdio.h>

void main()
{
    int array[5];
    int position;

    for(int i=0; i<5; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &array[i]);
    }

    printf("\n Enter position : ");
    scanf("%d", &position);

    printf("\n Element Of Position %d Is : %d\n", position,array[position-1]);
}

