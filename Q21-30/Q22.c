#include<stdio.h>
#include<stdbool.h>
#include<conio.h>
int main()
{
    int n,rem;
    bool indi=true;
    printf("Enter a range to check the prime number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    for(int temp=i;temp>0;temp=temp/10)
    {
        rem=temp%10;
        if(rem==2 || rem==3 || rem==5 || rem==7)
        {
            indi=true;
            break;
        }
        if(indi==true)
    {
        printf("the number %d is a prime number",n);
    }
    else
    {
        printf("the number %d is not a prime number",n);
    }
    }
    
    }
    getch();
    return 0;
}