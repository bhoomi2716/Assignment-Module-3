//  Write a program to find out the Max number from given Matrix. 

#include<stdio.h>

void main()
{
    int array[2][2];
    int max ;    
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf(" Enter Elements Of Array :");
            scanf("%d", &array[i][j]);
        }
        
    }

    max=array[0][0];
    
    for (int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
             if(array[i][j]>max)
            {
            max=array[i][j]; 
            }
        }
    }

    printf("\n Maximum Number of Array IS : %d\n",max);
}
