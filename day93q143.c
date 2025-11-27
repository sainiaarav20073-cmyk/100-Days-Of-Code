#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n, i, topIndex = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Input student details
    for (i = 0; i < n; i++) {
        printf("Enter details of Student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        printf("\n");
    }

    // Find student with highest marks
    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    // Print topper
    printf("Topper: %s (Marks: %.0f)\n", s[topIndex].name, s[topIndex].marks);

    return 0;
}
