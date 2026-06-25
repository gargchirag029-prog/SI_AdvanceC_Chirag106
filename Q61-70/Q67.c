#include<stdio.h>
void factorial(int n);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    factorial(n);
    return 0;
}   
void factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is %d",n,fact);
}