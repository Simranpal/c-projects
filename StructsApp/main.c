#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char* name;
    int id;
    double gpa;
}Student;

int main()
{
    Student s1;
    s1.name = "Simran";

    printf("s1.name = %s\n", s1.name);
    return 0;
}
