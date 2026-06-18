#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of rotations (K): ");
    scanf("%d", &k);
    k = k % n;  
    int temp[n];
    for(int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }
    for(int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    printf("Array after %d right rotations:\n", k);
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}