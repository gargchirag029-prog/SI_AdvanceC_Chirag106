#include<stdio.h>
int main()
{
    int si, p, r, t,ci;
    printf("Enter principal amount: ");
    scanf("%d", &p);
    printf("Enter rate of interest: ");
    scanf("%d", &r);
    printf("Enter time period: ");
    scanf("%d", &t);
    si = (p * r * t) / 100;
    ci = p * (1 + r/100) * t - p;
    printf("Simple Interest: %d\n", si);
    printf("Compound Interest: %d\n", ci);
    return 0;
}