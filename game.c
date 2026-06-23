#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int user, computer;
    srand(time(0));
    computer = rand() % 3 + 1;
    printf("=== Rock Paper Scissors Game ===\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &user);

    printf("\n");
    printf("Computer chose: ");
    if(computer == 1)
        printf("Rock\n");
    else if(computer == 2)
        printf("Paper\n");
    else
        printf("Scissors\n");
    if(user == computer)
    {
        printf("Match Draw!\n");
    }
    else if((user == 1 && computer == 3) ||
            (user == 2 && computer == 1) ||
            (user == 3 && computer == 2))
    {
        printf("You Win!\n");
    }
    else if(user >= 1 && user <= 3)
    {
        printf("Computer Wins!\n");
    }
    else
    {
        printf("Invalid Choice!\n");
    }
    return 0;
}