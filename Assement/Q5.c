#include <stdio.h>

int main() {
    int n=6,arr[6]={16,17,4,3,5,2};
    printf("Leaders in the array are: ");
    int maxRight = arr[n - 1];
    printf("%d ", maxRight);
    for(int i = n - 2; i >= 0; i--) {
        if(arr[i] >= maxRight) {
            maxRight = arr[i];
            printf("%d ", arr[i]);
        }
    }
    return 0;
}