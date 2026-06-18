#include <stdio.h>

int main() {
    int rows=3,cols=3;
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printf("Boundary elements in clockwise order:\n");
    for(int j = 0; j < cols; j++)
        printf("%d ", arr[0][j]);
    for(int i = 1; i < rows; i++)
        printf("%d ", arr[i][cols - 1]);
    if(rows > 1) {
        for(int j = cols - 2; j >= 0; j--)
            printf("%d ", arr[rows - 1][j]);
    }
    if(cols > 1) {
        for(int i = rows - 2; i >= 1; i--)
            printf("%d ", arr[i][0]);
    }
    return 0;
}