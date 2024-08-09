#include<stdio.h>

void main()
{
    int no, rev=0;
    
    printf("Enter Number : ");
    scanf("%d", &no);

    while(no>0)
    {
        int r=no%10;
        rev=(rev*10)+r;
        no=no/10;
    }

    printf("\n Reverse Number :  %d",rev);
}