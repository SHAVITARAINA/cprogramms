#include <stdio.h>
#include <stdlib.h>

int main() {
    // Using malloc to allocate memory for an integer
    int *ptr1 = (int*)malloc(sizeof(int));
    if (ptr1 == NULL) {
        printf("Memory allocation failed for ptr1\n");
        return 1;
    }

    *ptr1 = 42;
    printf("Value at ptr1: %d\n", *ptr1);

    // Using calloc to allocate memory for an array of 5 integers
    int *ptr2 = (int*)calloc(5, sizeof(int));
    if (ptr2 == NULL) {
        printf("Memory allocation failed for ptr2\n");
        free(ptr1); // Freeing previously allocated memory
        return 1;
    }

    printf("Values at ptr2: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr2[i]);
    }
    printf("\n");

    // Using realloc to resize the array to hold 8 integers
    int *ptr3 = (int*)realloc(ptr2, 8 * sizeof(int));
    if (ptr3 == NULL) {
        printf("Memory reallocation failed for ptr3\n");
        free(ptr1);
        free(ptr2);
        return 1;
    }

    // Setting new values in the resized array
    for (int i = 5; i < 8; i++) {
        ptr3[i] = i * 10;
    }

    printf("Values at ptr3 after realloc: ");
    for (int i = 0; i < 8; i++) {
        printf("%d ", ptr3[i]);
    }
    printf("\n");

    // Freeing the allocated memory
    free(ptr1);
    free(ptr3);

    return 0;
}