#include<stdio.h>

int main()
{
    int a[10][10], r, c, i, j, tar;
    printf("Enter the rows and columns of the matrix: ");
    scanf("%d%d", &r, &c);
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the target value: ");
    scanf("%d", &tar);
    int found = 0;
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if(a[i][j] == tar) {
                printf("Target found at row %d and column %d\n", i, j);
                found = 1;
            }
        }
    }
    if(found == 0) {
        printf("Target not found");
    }
    return 0;
}