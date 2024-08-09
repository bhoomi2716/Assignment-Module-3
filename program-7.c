#include <stdio.h>

void main()
{
    int ch;
    printf("Choose Shape Type To Find Area : ");
    printf("\n 1. Triangle");
    printf("\n 2. Rectangle");
    printf("\n 3. Circle");

    printf(" \n Enter Your Choice: ");
    scanf("%d", &ch);

    float area,b,h,r,w;
    float pi=3.14;
    switch (ch)
    {
        //float area,h;
        case 1 :
            // float b;
            printf("\n Enter Base : ");
            scanf("%f", &b);
            printf("\n Enter Height : ");
            scanf("%f", &h);
            area = (b*h)/2;
            printf("\n Area Of Triangle Is : %f", area);
            break;

        case 2 :
            // float w;
            printf("\n Enter Width : ");
            scanf("%f", &w);
            printf("\n Enter Height : ");
            scanf("%f", &h);
            area = w*h;
            printf("\n Area Of Rectangle Is : %f", area);
            break;

        case 3 :
            // float r,pi=3.14;
            printf("\n Enter radius : ");
            scanf("%f", &r);
            area =pi*r*r;
            printf("\n Area Of Circle Is : %f", area);
            break;

        default:
            printf("\n Enter Number From 1,2 Or 3 ");
             break;
    }
}