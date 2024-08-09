#include <stdio.h>

int main(){
    
    int m1,m2,m3,m4,m5,total;
    float pr;

    printf("Enter 1st Subject's Mark : ");
    scanf("%d",&m1);
    printf("Enter 2nd Subject's Mark : ");
    scanf("%d",&m2);
    printf("Enter 3rd Subject's Mark : ");
    scanf("%d",&m3);
    printf("Enter 4th Subject's Mark : ");
    scanf("%d",&m4);
    printf("Enter 5th Subject's Mark : ");
    scanf("%d",&m5);

    total = m1+m2+m3+m4+m5;
    pr=total/5;

    if(pr>75)
        printf("Distincation");
    else if(pr<=75 && pr>60)
        printf("First Class");
    else if(pr<=60 && pr>50)
        printf("Second Class");
    else if(pr<=50 && pr>35)
        printf("Pass Class");
    else
        printf("Fail");
    
     return 0;
}
