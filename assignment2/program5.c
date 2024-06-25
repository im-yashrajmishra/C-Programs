#include <stdio.h>

int main() {
    int arr[100];
    int n, i, elem;
    int index = -1;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to find: ");
    scanf("%d", &elem);

    for (i = 0; i < n; i++) {
        if (arr[i] == elem) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        printf("Element %d found at index %d\n", elem, index);
    } else {
        printf("Element %d not found in the array\n", elem);
    }

    return 0;
}

