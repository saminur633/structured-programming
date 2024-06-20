// Q6: Write a Program to check if the given number is Even or Odd.
#include <stdio.h>

// Function to check if a number is even or odd
const char* checkEvenOrOdd(int number) {
    if (number % 2 == 0) {
        return "Even";
    } else {
        return "Odd";
    }
}

int main() {
    int number;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is even or odd
    const char* result = checkEvenOrOdd(number);

    // Output the result
    printf("The number %d is %s.\n", number, result);

    return 0;
}
