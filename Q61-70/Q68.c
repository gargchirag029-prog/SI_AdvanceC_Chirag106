#include<stdio.h>
void gcd(int a,int b);
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    gcd(a,b);
    return 0;
}
void gcd(int a,int b)
{
    int gcd=1;
    for(int i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    printf("GCD of %d and %d is %d",a,b,gcd);
}