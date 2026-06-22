#include<stdio.h>
int main()
{
    int num;
    printf("enter the number is palidrome or not:");
    scanf("%d",&num);
    int rev=0;
    for(int temp=num;temp>0;temp=temp/10)
    {
        rev=rev*10+temp%10;
    }
    if(rev==num)
    {
        printf("the number is palindrome");
    }
    else
    {
        printf("the number is not palindrome");
    }
    return 0;
}