#include <stdio.h>

int main(){
    
    int year;

    printf("Enter year: ");
    scanf("%d",&year);

    if(year%4==0)
    {
        printf(" %d Is a leap year",year);
    }   
    else
    {
        printf(" %d Is a Not leap year",year);
    }
     return 0;
}