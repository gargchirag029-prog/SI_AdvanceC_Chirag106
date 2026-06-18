#include<stdio.h>

int main()
{
    int arr[5][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12},
        {13,14,15}
    };
    int transpose[3][5];
    int i, j;
    printf("Original Array:\n");
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
            transpose[j][i] = arr[i][j];
        }
        printf("\n");
    }
    printf("\nTranspose Array:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}