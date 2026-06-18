#include<stdio.h>
int main(){
    float circum,area;
    int radius;
    printf("Enter radius of the circle: ");
    scanf("%d", &radius);
    area = 3.14 * radius * radius;
    circum = 2 * 3.14 * radius;
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circum);
    return 0;
}