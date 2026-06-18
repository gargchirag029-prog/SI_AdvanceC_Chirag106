#include<stdio.h>
int main()
{
    int num1=0,num2=1,num3,n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for(int i=2;i<=n;i++)
    {
        num3=num1+num2;
        num1=num2;
        num2=num3;
    }
    printf("The %dth term of the Fibonacci series is: %d", n, num1);
    return 0;
}