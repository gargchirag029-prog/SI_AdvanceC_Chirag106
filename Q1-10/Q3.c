#include<stdio.h>
int main()
{
    int temp,a,b;
    printf("enter the first number: ");
    scanf("%d",&a);
    printf("enter the second number: ");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping the numbers are: %d and %d",a,b);
    return 0;
}