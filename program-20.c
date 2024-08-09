// Write a program of structure for five employee that provides the following information print and display empno, empname, address and age.

#include <stdio.h>

struct employee
{
    int empno;
    char empname[15];
    char address[70];
    int age;
};

void main()
{
    struct employee e[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter employee No. : ");
        scanf("%d", &e[i].empno);
        printf("\n Enter employee Name : ");
        scanf(" %s", &e[i].empname);
        printf("\n Enter employee Address : ");
        scanf(" %s", &e[i].address);
        printf("\n Enter employee Age. : ");
        scanf(" %d", &e[i].age);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\n Employee No. : %d", e[i].empno);
        printf("\n Employee Name : %s", e[i].empname);
        printf("\n Employee Address : %s", e[i].address);
        printf("\n Employee Age : %d", e[i].age);
    }
}
