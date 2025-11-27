#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inFile, *outFile;
    char ch;

    // Open input file
    inFile = fopen("input.txt", "r");
    if (inFile == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    // Open output file
    outFile = fopen("output.txt", "w");
    if (outFile == NULL) {
        printf("Error: Could not create output.txt\n");
        fclose(inFile);
        return 1;
    }

    // Convert lowercase to uppercase
    while ((ch = fgetc(inFile)) != EOF) {
        fputc(toupper(ch), outFile);
    }

    fclose(inFile);
    fclose(outFile);

    printf("Conversion successful! Output written to output.txt\n");

    return 0;
}
