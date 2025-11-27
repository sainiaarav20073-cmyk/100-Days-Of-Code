#include <stdio.h>

int main() {
    FILE *fp;
    int num, sum = 0, count = 0;

    // Open file
    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open numbers.txt\n");
        return 1;
    }

    // Read integers until EOF
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    // Display results
    if (count > 0) {
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", (float)sum / count);
    } else {
        printf("No numbers found in the file.\n");
    }

    return 0;
}
