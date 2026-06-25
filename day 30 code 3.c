#include <stdio.h>

int main() {
    int empID[100], n, i;
    char empName[100][50];
    float salary[100];

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &empID[i]);

        printf("Employee Name: ");
        scanf("%s", empName[i]);

        printf("Salary: ");
        scanf("%f", &salary[i]);
    }

    // Display employee records
    printf("\n----- Employee Records -----\n");
    printf("ID\tName\tSalary\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n", empID[i], empName[i], salary[i]);
    }

    return 0;
}