#include <stdio.h>

// typedef + structure
typedef struct {
    char name[100];
    int roll;
    float cgpa;
} student;

// function (passing structure)
void printInfo(student s) {
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll: %d\n", s.roll);
    printf("CGPA: %.2f\n", s.cgpa);
}

int main() {

    // initialization
    student s1 = {"Arun", 101, 8.5};

    // array of structures
    student s[2];

    // assigning values
    s[0] = s1;
    s[1] = (student){"Rahul", 102, 7.8};

    // pointer to structure
    student *ptr;
    ptr = &s[0];

    // arrow operator
    printf("Using Pointer:\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll: %d\n", ptr->roll);
    printf("CGPA: %.2f\n", ptr->cgpa);

    // function call
   printInfo(s[1]);

    return 0;
}