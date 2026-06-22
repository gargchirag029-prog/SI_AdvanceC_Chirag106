#include<stdio.h>
int main()
{
    int arr[10][10],transpose[10][10], c1,r1, i, j;
    printf("Enter the number of rows and columns of the array: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the elements of the array: ");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            transpose[j][i] = arr[i][j]; 
        }
    }
    printf("\nTranspose of the array:\n");
    for (i = 0; i < c1; i++) {
        for (j = 0; j < r1; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}