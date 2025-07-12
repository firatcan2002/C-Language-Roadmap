#include <stdio.h>

int main()
{
    int age = 21;
    float height = 1.75;
    char initial = 'F';

    printf("Age: %d\n",age);
    printf("Height: %.2f meters\n",height);
    printf("Initial: %c",initial);

    int newAge;
    printf("Enter your age: ");
    scanf("%d",&newAge);
    printf("You entered: %d\n",newAge);

    return 0;
}