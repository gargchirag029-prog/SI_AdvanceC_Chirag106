#include<stdio.h>
int main()
{
    int a, b, *p1, *p2, temp;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    p1 = &a;
    p2 = &b;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("After Swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}