#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);
    if(ch>='A' && ch<='Z')
        printf("%c is an uppercase letter.",ch);
    else if(ch>='a' && ch<='z')
        printf("%c is a lowercase letter.",ch);
    else if(ch>='0' && ch<='9')
        printf("%c is a digit.",ch);
    else
        printf("%c is a special character.",ch);
    return 0;
}