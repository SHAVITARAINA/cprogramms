#include <stdio.h>

// Function to swap two numbers using call by reference
void swap(int *a, int *b) {
    int temp;

    printf("Before swapping: *a = %d, *b = %d\n", *a, *b);

    // Swap the values using a temporary variable
    temp = *a;
    *a = *b;
    *b = temp;

    printf("After swapping: *a = %d, *b = %d\n", *a, *b);
}

int main() {
    int num1 = 5, num2 = 10;

    // Call the swap function with the addresses of num1 and num2
    swap(&num1, &num2);

    // Print the values in the main function after the function call
    printf("Back in main: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}