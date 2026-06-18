#include <stdio.h>
int main()
{
    int arr[] = {1, 3, 5, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j;
    int leftSum, rightSum;
    int count = 0;
    for(i = 0; i < n; i++)
    {
        leftSum = 0;
        rightSum = 0;
        for(j = 0; j < i; j++)
        {
            leftSum += arr[j];
        }
        for(j = i + 1; j < n; j++)
        {
            rightSum += arr[j];
        }
        if(leftSum == rightSum)
        {
            printf("Equilibrium Index = %d\n", i);
            count++;
        }
    }
    printf("Total Equilibrium Indices = %d\n", count);
    return 0;
}