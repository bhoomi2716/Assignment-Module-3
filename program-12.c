// Write a program to find out the max number from given 10 elements of array.

#include<stdio.h>

void main()
{
    int array[10];
    int max ;    
    for(int i=0; i<10; i++)
    {
        printf(" Enter Elements Of Array :");
        scanf("%d", &array[i]);
    }

    max=array[0];
    

    for (int i=0;i<10;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
            
        }
    }

    printf("\n Maximum Number of Array IS : %d\n",max);
}
