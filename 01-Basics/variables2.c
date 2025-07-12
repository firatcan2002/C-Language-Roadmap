#include <stdio.h>

int main() 
{
    int age;
    float score;
    char name[30];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age and score: ");
    scanf("%d %f", &age, &score);

    printf("\nHello %s!\n", name);
    printf("Age: %d, Score: %.2f\n", age, score);

    return 0;
}