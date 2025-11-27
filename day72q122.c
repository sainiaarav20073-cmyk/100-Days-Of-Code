#include <stdio.h>

int main() {
    FILE *fp;
    char line[100];

    // Open file in read mode
    fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    // Read each line using fgets() until EOF
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);   // Print the line
    }

    // Close the file
    fclose(fp);

    return 0;
}
