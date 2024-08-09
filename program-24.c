// Write a program to read data from file.

#include <stdio.h>

void main()
{
    FILE *file;
    char data;
    file = fopen("1.txt", "r");
    
    if (NULL == file)
    {
        printf("file can't be opened \n");
    }

    printf("content of this file are \n");

    while (!feof(file))
    {
        data = fgetc(file);
        printf("%c", data);
    }
    
    fclose(file);
}
