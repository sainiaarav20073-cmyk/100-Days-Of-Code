#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char text[200];

    // Take filename from user
    printf("Enter filename: ");
    scanf("%s", filename);

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    // Clear input buffer
    getchar();

    // Take new text to append
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append newline before writing
    fprintf(fp, "\n%s", text);

    // Close file
    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}
