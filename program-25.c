// 25. Write a program to read and write data from the file. 

#include<stdio.h>

void main()
{
    FILE *fptr;
    fptr=fopen("1.txt","a");
    fprintf(fptr,"\n File I/O");
    
}
