#include<stdio.h>
int main()
{
    int days, years, weeks;
    printf("Enter the number of days: ");
    scanf("%d", &days);
    years = days / 365;
    weeks = (days % 365) / 7;
    days = (days % 365) % 7;
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);
    return 0;
}