#include <string.h>
#include <stdio.h>

int main(void) {

    char student_name[50];
    int id;
    float _math, _science, _english;

    printf("Enter student name: ");
    fgets(student_name, 50, stdin);

    printf("Enter student ID: ");
    scanf("%d", &id);

    printf("Enter grade in Math: ");
    scanf("%f", &_math);

    printf("Enter grade in Science: ");
    scanf("%f", &_science);

    printf("Enter grade in English: ");
    scanf("%f", &_english);

    printf("\nStudent Name: %s", student_name);
    printf("Student ID: %d\n", id);
    printf("Grade in Math: %.2f\n", _math);
    printf("Grade in Science: %.2f\n", _science);
    printf("Grade in English: %.2f\n", _english);
    printf("--------------------------\n");

    float average = (_math + _science + _english) / 3;

    printf("Average Grade: %.2f\n", average);

    if (average >= 75) {
        printf("Result: Passed\n");
    }

    return 0;
}
