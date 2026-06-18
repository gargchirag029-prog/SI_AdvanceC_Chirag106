#include<stdio.h>
int main()
{
    char ch;
    int num1,num2;
    printf("Enter the operation +, -, *, /: ");
    scanf(" %c", &ch);
    switch (ch)
    {
    case '+':
    printf("Enter the two number:");
    scanf("%d %d",&num1,&num2);
    printf("The sum of %d and %d is: %d",num1,num2,num1+num2);
        break;
    case '-':
    printf("Enter the two number:");
    scanf("%d %d",&num1,&num2);
    printf("The difference of %d and %d is: %d",num1,num2,num1-num2);
        break;
    case '*':
    printf("Enter the two number:");
    scanf("%d %d",&num1,&num2);
    printf("The product of %d and %d is: %d",num1,num2,num1*num2);
        break;
    case '/':
    printf("Enter the two number:");
    scanf("%d %d",&num1,&num2);
    printf("The quotient of %d and %d is: %d",num1,num2,num1/num2);
        break;
    default:
        printf("Invalid operation.");
        break;
    }
    return 0;
}