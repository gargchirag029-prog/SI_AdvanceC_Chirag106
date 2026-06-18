#include<stdio.h>
int main()
{
    int arr[10][10],arr1[10][10], c1,c2,r1,r2, i, j, mul[10][10];
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
    if(c1==r2)
    {
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                mul[i][j] = 0; 
                for (int k = 0; k < c1; k++) {
                    mul[i][j]=mul[i][j]+arr[i][k] * arr1[k][j]; 
                }
            }
        }
        printf("\nProduct of the two arrays:\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                printf("%d ", mul[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("not possible\n");
    }
    return 0;
}