#include<stdio.h>
int main()
{
    int cel;
    float fah;
    printf("Enter temperature in Celsius: ");
    scanf("%d", &cel);
    fah = (cel * 9.0 / 5.0) + 32;
    printf("Temperature in Fahrenheit: %.2f", fah);
    return 0;
}