#include <stdio.h>
int main() {
    int rows, i, j, space;
    printf("Enter number of rows for the top half: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++) {
            for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for (i = rows - 1; i >= 1; i--) {
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
       for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
