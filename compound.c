// Q5: Write a Program to calculate Compound Interest.
#include <stdio.h>
#include <math.h>

// Function to calculate compound interest
double calculateCompoundInterest(double principal, double rate, int time, int n) {
    double amount = principal * pow((1 + rate / (n * 100.0)), n * time);
    double interest = amount - principal;
    return interest;
}

int main() {
    double principal, rate;
    int time, n;

    // Input principal, rate, time and number of times interest is compounded per year
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);
    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);
    printf("Enter the time (in years): ");
    scanf("%d", &time);
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);

    // Calculate compound interest
    double interest = calculateCompoundInterest(principal, rate, time, n);

    // Output the result
    printf("Compound Interest: %.2lf\n", interest);

    return 0;
}
