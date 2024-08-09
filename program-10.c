#include<stdio.h>

void main()
{
    int no;
    printf("Enter Number : ");
    scanf("%d", &no);

    int sum = 0;
    while(no>0)
    {
        int r=no%10;
        sum=sum+r;
        no=no/10;
    }

    printf("\n Sum Of Number Is : %d",sum);
}