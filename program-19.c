// Write a Program of Print a number and check the number is palindrome or not using recursive Function.

#include<stdio.h> 

int getReverse(int num, int rev){
    if(num == 0)
        return rev;
    
    int rem = num % 10;
    rev = rev * 10 + rem;
    
    return getReverse(num / 10, rev);
}

int main ()
{
    int num, reverse = 0;
    
    printf("Enter An Integer Number: ");
    scanf("%d", &num);

    if (num == getReverse(num, reverse))
        printf("%d is Palindrome\n", num);
    else
        printf("%d is Not Palindrome\n", num);

}