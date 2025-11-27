#include <stdio.h>
#include <string.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    char input[10];
    scanf("%s", input);

    enum Status s;

    // Convert string to enum value
    if (strcmp(input, "SUCCESS") == 0) s = SUCCESS;
    else if (strcmp(input, "FAILURE") == 0) s = FAILURE;
    else if (strcmp(input, "TIMEOUT") == 0) s = TIMEOUT;

    // Print output based on enum value
    switch (s) {
        case SUCCESS:
            printf("Operation successful");
            break;

        case FAILURE:
            printf("Operation failed");
            break;

        case TIMEOUT:
            printf("Operation timed out");
            break;
    }

    return 0;
}
