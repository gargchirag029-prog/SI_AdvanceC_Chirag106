#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int arr[rows][cols];
    printf("Enter the binary matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int maxOnes = 0;
    int rowIndex = -1;
    for(int i = 0; i < rows; i++) {
        int count = 0;
        for(int j = 0; j < cols; j++) {
            if(arr[i][j] == 1)
                count++;
        }
        if(count > maxOnes) {
            maxOnes = count;
            rowIndex = i + 1;   // 1-based indexing
        }
    }
    if(rowIndex == -1)
        printf("No 1s found in the matrix.\n");
    else
        printf("Row with maximum 1s = %d\n", rowIndex);
    return 0;
}