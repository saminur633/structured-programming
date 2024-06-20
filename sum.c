// Q2: Write a Program to find the Sum of two numbers entered by the user.


// C program to add two numbers 
#include <stdio.h> 
  
int main() 
{ 
    int A, B, sum = 0; 
  
    // Ask user to enter the two numbers 
    printf("Enter two numbers A and B : \n"); 
  
    // Read two numbers from the user || A = 2, B = 3 
    scanf("%d%d", &A, &B); 
  
    // Calculate the addition of A and B 
    // using '+' operator 
    sum = A + B; 
  
    // Print the sum 
    printf("Sum of A and B is: %d", sum); 
  
    return 0; 
}