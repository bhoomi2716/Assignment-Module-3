#include<stdio.h>
void main()
{
    /*
        *  
        **  
        ***  
        ****  
        *****
    */

    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

 printf("-------------------\n");

    /*
        1
       2 3
      4 5 6
     7 8 9 10   
    */
    int a=1,n=4;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=i; j++)
        {
            printf(" %d",a );
            a++;
        }
        printf("\n");
    }
 
 printf("-------------------\n");
    
    /*
        * * * * *  
        * * * *  
        * * *  
        * *  
        *
    */
    for(int i=5; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
}