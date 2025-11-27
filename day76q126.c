#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char line[200];

    // Ask user for filename
    printf("Enter filename: ");
    scanf("%s", filename);

    // Try opening the file in read mode
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    printf("File opened successfully.\n");

    // Read and display content using fgets()
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
