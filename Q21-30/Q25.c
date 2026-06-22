#include<stdio.h>
int main(){
    int n;
    printf("Enter a number to check it is strong number or not:");
    scanf("%d",&n);
    int sum=0;
    for(int temp=n;temp>0;temp=temp/10)
    {
        int rem=temp%10;
        int fact=1;
        for(int i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
    }
    if(sum==n)
    {
        printf("the number is strong number");
    }
    else
    {
        printf("the number is not strong number");
    }
    return 0;
}