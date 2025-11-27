#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, marks;
    int n, i;

    // Open file in write mode to store records
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    // Number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Write student records
    for (i = 0; i < n; i++) {
        printf("\nEnter name, roll number, and marks of student %d:\n", i + 1);
        scanf("%s %d %d", name, &roll, &marks);
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    // Reopen file in read mode
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error reading file!\n");
        return 1;
    }

    printf("\n--- Student Records ---\n");

    // Read and display records
    while (fscanf(fp, "%s %d %d", name, &roll, &marks) != EOF) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}
