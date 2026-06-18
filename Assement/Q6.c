#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n],totalSum = 0;
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        totalSum += arr[i];
    }
    int leftSum = 0;
    for(int i = 0; i < n; i++) {
        totalSum -= arr[i]; 
        if(leftSum == totalSum) {
            printf("Equilibrium Index = %d\n", i);
            return 0;
        }
        leftSum += arr[i];
    }
    printf("No Equilibrium Index Found\n");
    return 0;
}