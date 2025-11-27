#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

// Function that accepts structure and prints data
void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %.0f\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student st;

    // Taking input
    printf("Enter Name: ");
    scanf("%s", st.name);

    printf("Enter Roll: ");
    scanf("%d", &st.roll);

    printf("Enter Marks: ");
    scanf("%f", &st.marks);

    // Call function
    printStudent(st);

    return 0;
}
