#include <stdio.h>

int main() 
{
    int array[100]; 
    int n, i;
    int total_sum = 0;
    float average;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < n; i++)
    {
        total_sum += array[i];
    }
    average = (float)total_sum / n;

    printf("Sum of elements: %d\n", total_sum);
    printf("Average of elements: %.2f\n", average);

    return 0;
}

