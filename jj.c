#include <stdio.h>

int main() {
    int num, originalNum, remainder, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;  // Store the original number

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    // Check if palindrome
    if (originalNum == reversed)
        printf("%d is a Palindrome.\n", originalNum);
    else
        printf("%d is not a Palindrome.\n", originalNum);

    return 0;
}