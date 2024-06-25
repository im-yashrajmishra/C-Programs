#include <stdio.h>

int main() {
    int arr[100];
    int n, i, j, count;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = 0;
            }
        }
        if (arr[i] != 0) {
            printf("%d occurs %d times\n", arr[i], count);
        }
    }

    return 0;
}

