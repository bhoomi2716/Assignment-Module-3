// Write a program you have to print the Fibonacci series up to user given number.

#include<stdio.h>    

void main()    
{    
    int n1=0,n2=1,n3,no;

    printf("Enter The Number Of Elements:");    
    scanf("%d",&no);  

    printf("\n%d %d",n1,n2);

    for(int i=2;i<no;i++)
    {    
        n3=n1+n2;    
        printf(" %d",n3);    
        n1=n2;    
        n2=n3;    
    }  
    
 }    