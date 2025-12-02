#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e, e_read;
    FILE *fp;

    // Input employee data
    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Salary: ");
    scanf("%f", &e.salary);

    // Write to binary file
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    fwrite(&e, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nEmployee details entered and stored in file.\n");

    // Read from binary file
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    fread(&e_read, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Output
    printf("\nDisplaying Employee Data Read from File:\n");
    printf("Name: %s\nID: %d\nSalary: %.2f\n",
           e_read.name, e_read.id, e_read.salary);

    return 0;
}
