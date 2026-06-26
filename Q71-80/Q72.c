#include <stdio.h>
int sumNatural(int n)
{
    if (n == 0)
        return 0;
    else
        return n + sumNatural(n - 1);
}
int main()
{
    int n, sum;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Please enter a positive integer.");
    }
    else
    {
        sum = sumNatural(n);
        printf("Sum of first %d natural numbers = %d", n, sum);
    }
    return 0;
}