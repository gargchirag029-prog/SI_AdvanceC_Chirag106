#include <stdio.h>
int main()
{
    int n, i, j;
    int coef;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        coef = 1;
        for(j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for(j = 0; j <= i; j++)
        {
            printf("%d ", coef);
            coef = coef * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}