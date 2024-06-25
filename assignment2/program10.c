#include <stdio.h>

void rotateLeft(int arr[], int n, int positions) 
{
    int i, temp;


    for (i = 0; i < positions; i++) {
        temp = arr[0];
        for (int j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = temp;
    }
}

int main() {
    int arr[100];
    int n, i, positions;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate left: ");
    scanf("%d", &positions);

    rotateLeft(arr, n, positions);

    printf("Array after rotating %d positions to the left: ", positions);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

