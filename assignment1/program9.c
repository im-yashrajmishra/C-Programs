#include <stdio.h>
int main() 
{
    float w, h, bmi;
    printf("Enter your weight (in kg): ");
    scanf("%f", &w);
    printf("Enter your height (in meters): ");
    scanf("%f", &h);
    bmi = w / (h * h);
    printf("Your BMI is: %.2f\n", bmi);
    if (bmi < 18.5) printf("BMI Category: Underweight\n");
    else if (bmi >= 18.5 && bmi <= 24.9)    printf("BMI Category: Normal weight\n");
    else if (bmi >= 25 && bmi <= 29.9)  printf("BMI Category: Overweight\n");
    else printf("BMI Category: Obesity\n");
    return 0;
}
