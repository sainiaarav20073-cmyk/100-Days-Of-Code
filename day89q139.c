#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {

    enum Status s;

    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n", SUCCESS, FAILURE, TIMEOUT);

    return 0;
}
