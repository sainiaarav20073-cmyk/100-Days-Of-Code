#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

// Function to return the topper
struct Student getTopper(struct Student s[], int n) {
    int topIndex = 0;

    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }
    return s[topIndex];  // Returning structure
}

int main() {
    int n = 3;

    struct Student s[3] = {
        {"Riya", 101, 89},
        {"Karan", 102, 96},
        {"Meena", 103, 92}
    };

    // Get topper
    struct Student top = getTopper(s, n);

    // Print result
    printf("Top Student: %s | Roll: %d | Marks: %.0f\n",
           top.name, top.roll, top.marks);

    return 0;
}
