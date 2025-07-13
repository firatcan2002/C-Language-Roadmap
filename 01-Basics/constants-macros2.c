#include <stdio.h>
#define PI 3.14159

int main()
{
    const int MAX_RADIUS = 100;
    int r;
    printf("Please enter radius: ");
    scanf("%d",&r);

    if (r > MAX_RADIUS)
    {
        printf("Radius exceeds the allowed maximum of %d units.\n", MAX_RADIUS);
        return 1;
    }

    float AREA = PI * r * r;
    float Circumference = 2 * PI * r;

    printf("AREA: %.2f\n",AREA);
    printf("Circumference: %.2f",Circumference);

    return 0;
}