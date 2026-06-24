#include<stdio.h>
int main() {
    char str[100];
    int len = 0, i;
    printf("Enter a string: ");
    gets(str);
    while(str[len] != '\0')
        len++;
    printf("Reversed String: ");
    for(i = len - 1; i >= 0; i--)
        printf("%c", str[i]);
    return 0;
}