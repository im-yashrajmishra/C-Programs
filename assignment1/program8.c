#include <stdio.h>
int main() 
{
    float t;
    printf("Enter the temperature: ");
    scanf("%f", &t);
    if(t > 30)  printf("It's hot outside, stay hydrated!\n");
    else if(t >= 20 && t <= 30) printf("The weather is nice and warm.\n");
    else if (t >= 10 && t <= 19)    printf("It's a bit cold, wear a jacket.\n");
    else if (t < 10)    printf("It's cold outside, stay warm!\n");
    return 0;
}
