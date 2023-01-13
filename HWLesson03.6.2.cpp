#include <stdio.h>

int main()
{
    int i = 0;
    int j = 7;
    printf("Guess the hidden number\n");
    while (i != j) {
        printf("Enter you number: ");
        scanf_s("%i", &i);
            if (i != j) {
                if (i > j) {
                    printf("Hidden number is smaller than you expect\n");
                }
                else if (i < j) {
                    printf("Hidden number is biggest than you expect\n");
                }
                if (i > 10) {
                    printf("Your number is over ten\n");
                }
                else if (i == 10) {
                    printf("Your number is ten\n");
                }
                else {
                    printf("Your number is less than ten\n");
                }
                if (i % 2 == 0) {
                    printf("Your number is divisible by two\n");
                }
                else {
                    printf("Your number is not divisible by two\n");
                }
                if (i % 3 == 0) {
                    printf("Your number is divisible by three\n");
                }
                else {
                    printf("Your number is not divisible by three\n");
                }
                printf("Hint: The hidden number is less than ten, not divisible by two or three\n");
            }
        printf("\n");
    }
    printf("CONGRATULATION YOU GUESSED!\n");
return 0;
}