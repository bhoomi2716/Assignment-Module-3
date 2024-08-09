#include <stdio.h>

int main(){
    
    int no, square,cube;
    printf(" Enter Number: ");
    scanf("%d",&no);

    square=no*no;
    cube=no*no*no;

    printf(" \n Square of %d Is %d", no, square);
    printf(" \n Cube  of %d Is %d", no, cube);
     return 0;
}