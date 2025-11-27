#include <stdio.h>

enum Colors { RED, YELLOW, GREEN };

int main() {

    enum Colors c;
    const char *names[] = {"RED", "YELLOW", "GREEN"};

    // Loop through all enum values
    for (c = RED; c <= GREEN; c++) {
        printf("%s=%d\n", names[c], c);
    }

    return 0;
}
