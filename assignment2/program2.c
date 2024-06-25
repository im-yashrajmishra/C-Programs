#include <stdio.h>
#include <limits.h>

int main() 
{
    int i, n, max = INT_MIN, min = INT_MAX;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the elements of array: \n");
    for (i = 0; i < n; i++) 
    {
	    printf("Enter element %d: ",(i+1));
	    scanf("%d", &arr[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++) 
    {
        if (arr[i] > max)	max = arr[i];
        if (arr[i] < min)	min = arr[i];
    }
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}

