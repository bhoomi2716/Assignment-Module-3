// Write a program to print the Fibonacci series using function.

#include<stdio.h>    


int fibonacci(int n);

void main()    
{    
    int no;

    printf("Enter The Number Of Elements:");    
    scanf("%d",&no);  

    fibonacci(no);
 
 }    

 int fibonacci(int n)
 {

    int n1=0,n2=1,n3;

    
    printf("\n%d %d",n1,n2);

    for(int i=2;i<n;i++)
    {    
        n3=n1+n2;    
        printf(" %d",n3);    
        n1=n2;    
        n2=n3;    
    }  

 }