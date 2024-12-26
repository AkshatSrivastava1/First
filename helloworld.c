// Write a program in to find if a number is positive negative or zero using ternary operator 

#include <stdio.h>
void main()
{
    int a;
    printf("Enter a number.");
    scanf("%d", &a);
    a == 0 ? printf("The number is 0.") : a > 0 ? printf("%d is positive ", a)  : printf("%d is negative ", a);
}