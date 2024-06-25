#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int n) {
    int first, second;
    first = INT_MIN;
    second = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    
    return second;
}

int main() {
    int n;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int secondLargest = findSecondLargest(arr, n);
    printf("The second largest element in the array is: %d\n", secondLargest);
    
    return 0;
}

