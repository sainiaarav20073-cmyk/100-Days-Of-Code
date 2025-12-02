#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student *s;

    // Dynamically allocate memory
    s = (struct Student *)malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input
    printf("Enter Student Name: ");
    scanf("%s", s->name);

    printf("Enter Student Roll: ");
    scanf("%d", &s->roll);

    printf("Enter Student Marks: ");
    scanf("%d", &s->marks);

    // Output
    printf("\nName: %s | Roll: %d | Marks: %d\n",
           s->name, s->roll, s->marks);

    // Free memory
    free(s);

    return 0;
}
