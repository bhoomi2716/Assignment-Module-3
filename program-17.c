#include<stdio.h>

int factorial(int x);

void main()
{
    int no;
    printf("Enter Possitive Numnber : ");
    scanf("%d", &no);

    factorial(no);

    
}

int factorial(int x)
{
    int fact=1;

    for(int i=1; i<=x; i++)
    {
        fact=fact*i;
    }

    printf("\n Fectorial of %d Is : %d ",x,fact);

}

