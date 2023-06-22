#include <stdio.h>

// Define the structure for a student
struct Student {
    char name[50];
    int age;
    float marks;
};

// Function to swap the fields of two student structures
void swapStudents(struct Student* student1, struct Student* student2) {
    // Swap name
    char tempName[50];
    strcpy(tempName, student1->name);
    strcpy(student1->name, student2->name);
    strcpy(student2->name, tempName);

    // Swap age
    int tempAge = student1->age;
    student1->age = student2->age;
    student2->age = tempAge;

    // Swap marks
    float tempMarks = student1->marks;
    student1->marks = student2->marks;
    student2->marks = tempMarks;
}

int main() {
    struct Student student1, student2;

    // Read data for student1 from the user
    printf("Enter details for student 1:\n");
    printf("Enter name: ");
    scanf("%s", student1.name);
    printf("Enter age: ");
    scanf("%d", &student1.age);
    printf("Enter marks: ");
    scanf("%f", &student1.marks);

    // Read data for student2 from the user
    printf("\nEnter details for student 2:\n");
    printf("Enter name: ");
    scanf("%s", student2.name);
    printf("Enter age: ");
    scanf("%d", &student2.age);
    printf("Enter marks: ");
    scanf("%f", &student2.marks);

    // Display the initial data
    printf("\nInitial data:\n");
    printf("Student 1:\nName: %s\nAge: %d\nMarks: %.2f\n", student1.name, student1.age, student1.marks);
    printf("\nStudent 2:\nName: %s\nAge: %d\nMarks: %.2f\n", student2.name, student2.age, student2.marks);

    // Swap the fields of the two students
    swapStudents(&student1, &student2);

    // Display the swapped data
    printf("\nSwapped data:\n");
    printf("Student 1:\nName: %s\nAge: %d\nMarks: %.2f\n", student1.name, student1.age, student1.marks);
    printf("\nStudent 2:\nName: %s\nAge: %d\nMarks: %.2f\n", student2.name, student2.age, student2.marks);

    return 0;
}

