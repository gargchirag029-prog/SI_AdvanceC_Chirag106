#include<stdio.h>
int main()
{
    int arr[10][10],arr1[10][10], c1,c2,r1,r2, i, j, sum[10][10];
    printf("Enter the number of rows and columns of the first array: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the elements of the first array: ");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter the number of rows and columns of the second array: ");
    scanf("%d %d", &r2, &c2);
    printf("Enter the elements of the second array: ");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            sum[i][j] = arr[i][j] + arr1[i][j];
        }
    }
    printf("\nSum of the two arrays:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;

}