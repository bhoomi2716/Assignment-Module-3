#include<stdio.h>

int main()
{
    int no,temp=0;

    printf(" Enter Number : ");
    scanf("%d", &no);

    for(int i=2; i<no; i++)
    {
        if(no%i==0)
        {
            temp=1;
            break;
        }
    } 

    if(temp==0)
    {
        printf(" %d Is Prime Number ", no);
    }
    else
    {
        printf(" %d Is Not Prime Number ",no);
    }

    return 0;
}