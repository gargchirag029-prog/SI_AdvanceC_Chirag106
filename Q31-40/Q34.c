#include <stdio.h>
int main() {
    int rows, i, j;
    int number = 1; 
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("\nFloyd's Triangle:\n");
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", number);
            number++; 
        }
        printf("\n");
    }
    return 0;
}
