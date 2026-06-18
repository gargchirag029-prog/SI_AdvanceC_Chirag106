#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int a[n1];
    printf("Enter elements of first sorted array:\n");
    for(int i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int b[n2];
    printf("Enter elements of second sorted array:\n");
    for(int i = 0; i < n2; i++)
        scanf("%d", &b[i]);
    int merged[n1 + n2];
    int i = 0, j = 0, k = 0;
    for(; i < n1 && j < n2; ) {
        if(a[i] <= b[j])
            merged[k++] = a[i++];
        else
            merged[k++] = b[j++];
    }
    for(; i < n1; i++) {
        merged[k++] = a[i];
    }
    for(; j < n2; j++) {
        merged[k++] = b[j];
    }
    int n = n1 + n2;
    double median;
    if(n % 2 == 0)
        median = (merged[n/2 - 1] + merged[n/2]) / 2.0;
    else
        median = merged[n/2];
    printf("Median = %.2f\n", median);
    return 0;
}