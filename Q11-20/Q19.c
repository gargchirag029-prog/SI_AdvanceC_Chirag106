#include<stdio.h>
int main()
{
    int fac=1,num;
    printf("Enter a number: ");
    scanf("%d", &num);
    fac=1;
    for(int i=1;i<=num;i++)
    {
        fac=fac*i;
    }
    printf("The factorial of %d is: %d", num, fac);
    return 0;
}