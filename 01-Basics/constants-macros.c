#include <stdio.h>

#define PI 3.14159
#define STUDENT_NAME "Firat"

int main() {
    const int MAX_USERS = 100; 

    printf("PI value: %.2f\n", PI);
    printf("Max users allowed: %d\n", MAX_USERS);
    printf("Student: %s\n", STUDENT_NAME);

    return 0;
}