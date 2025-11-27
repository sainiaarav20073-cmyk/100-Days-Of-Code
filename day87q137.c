#include <stdio.h>
#include <string.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    char input[20];
    scanf("%s", input);

    enum Role r;

    if (strcmp(input, "ADMIN") == 0)
        r = ADMIN;
    else if (strcmp(input, "USER") == 0)
        r = USER;
    else
        r = GUEST;

    switch (r) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;

        case USER:
            printf("Welcome User!\n");
            break;

        case GUEST:
            printf("Welcome Guest!\n");
            break;
    }

    return 0;
}
