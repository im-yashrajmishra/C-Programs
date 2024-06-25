#include <stdio.h>
int main() 
{
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    float area = 3.14 * radius * radius;
    float circum = 2 * 3.14 * radius;
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circum);
    return 0;
}

