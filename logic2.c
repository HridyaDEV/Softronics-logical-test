//Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it



#include <stdio.h>

int main() {
    int numElements;

    
    printf("Enter the number of elements: ");
    scanf("%d", &numElements);

    int numbers[numElements];
    int smallerCounts[numElements];

    
    printf("Enter the elements of the array: ");
    for (int i = 0; i < numElements; i++) {
        scanf("%d", &numbers[i]);
    }

    
    for (int i = 0; i < numElements; i++) {
        int count = 0;
        for (int j = 0; j < numElements; j++) {
            if (numbers[j] < numbers[i]) {
                count++;
            }
        }
        smallerCounts[i] = count;
    }

  
    printf("Count of smaller numbers for each element: ");
    for (int i = 0; i < numElements; i++) {
        printf("%d ", smallerCounts[i]);
    }
    printf("\n");

    return 0;
}

    
   
