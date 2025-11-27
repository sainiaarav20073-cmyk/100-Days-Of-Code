#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int age;

    // Open file in write mode
    fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Take input
    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Age: ");
    scanf("%d", &age);

    // Write to file
    fprintf(fp, "Name: %s Age: %d", name, age);

    // Close file
    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}
