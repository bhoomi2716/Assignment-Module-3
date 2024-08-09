#include <stdio.h>
#include<math.h>

int main(){
    
    float p,r,n,si,ci,a;

    printf("Enter Principal Amount: ");
    scanf("%f",&p);

    printf("\n Enter Rate : ");
    scanf("%f",&r);

    printf("\n Enter Number Of Years : ");
    scanf("%f",&n);
    
    si=(p*r*n)/100;

    a= p*((pow((1 + r/ 100),n))); 
    ci=a-p;

    printf("\n Simple Intrest : %f",si);
    printf("\n Compound Intrest : %f",ci);
    return 0;
}