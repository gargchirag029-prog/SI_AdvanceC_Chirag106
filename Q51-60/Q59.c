#include<stdio.h>
int main() {
    char str[100];
    int len = 0, i, flag = 1;
    printf("Enter a string: ");
    gets(str);
    while(str[len] != '\0')
        len++;
    for(i = 0; i < len/2; i++) {
        if(str[i] != str[len-1-i]) {
            flag = 0;
            break;
        }
    }
    if(flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}