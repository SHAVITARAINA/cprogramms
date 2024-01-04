#include <stdio.h>

// Define a union to store information about a student
union StudentInfo {
    char name[50];
    int rollNumber;
    float gpa;
};

int main() {
    // Declare a variable of type union StudentInfo
    union StudentInfo student;

    // Input data for the student
    printf("Enter student name: ");
    scanf("%s", student.name);

    printf("Enter student roll number: ");
    scanf("%d", &student.rollNumber);

    printf("Enter student GPA: ");
    scanf("%f", &student.gpa);

    // Display the entered information
    printf("\nStudent Information:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("GPA: %.2f\n", student.gpa);

    return 0;
}
