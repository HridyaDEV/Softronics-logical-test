#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("No second smallest element\n");
        return 0;
    }

    int arr[n]; 

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    if (arr[1] != arr[0]) {
        printf("Second smallest element: %d\n", arr[1]);
    } else {
        printf("No second smallest element\n");
    }

    return 0;
}
