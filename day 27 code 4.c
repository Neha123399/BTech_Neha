#include <stdio.h>

int main() {
    char name[50];
    int roll;
    float m1, m2, m3, m4, m5, total, percentage;
    char grade;

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter marks of 5 subjects:\n");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    printf("\n----- Marksheet -----\n");
    printf("Name       : %s\n", name);
    printf("Roll No.   : %d\n", roll);
    printf("Total Marks: %.2f\n", total);
    printf("Percentage : %.2f%%\n", percentage);
    printf("Grade      : %c\n", grade);

    return 0;
}