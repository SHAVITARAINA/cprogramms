#include <stdio.h>

// Define a structure to store student information
struct Student {
    char name[50];
    int marks[5]; // Assuming there are 5 subjects
};

// Function to calculate the total marks for a student
int calculateTotalMarks(struct Student student) {
    int totalMarks = 0;
    for (int i = 0; i < 5; i++) {
        totalMarks += student.marks[i];
    }
    return totalMarks;
}

int main() {
    // Define an array of structures to store information for multiple students
    struct Student students[3];

    // Input data for three students
    for (int i = 0; i < 3; i++) {
        printf("Enter details for Student %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%s", students[i].name);

        for (int j = 0; j < 5; j++) {
            printf("Enter marks for Subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
        }
    }

    // Calculate and display total marks for each student
    for (int i = 0; i < 3; i++) {
        int totalMarks = calculateTotalMarks(students[i]);
        printf("Total marks for %s: %d\n", students[i].name, totalMarks);
    }

    return 0;
}