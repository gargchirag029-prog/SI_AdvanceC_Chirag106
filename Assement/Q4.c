#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int arr[n - 1];
    printf("Enter %d elements:\n", n - 1);
    for(i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    int totalSum = n * (n + 1) / 2;
    int missingNumber = totalSum - sum;
    printf("The missing number is: %d\n", missingNumber);
    return 0;
}