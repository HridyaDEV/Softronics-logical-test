/*Write a program to find the "majority element" in a given array of integers. A majority
element is an element that appears more than half of the total elements in the array. If
there’s no majority element, the program should output "No majority element.*/

#include <stdio.h>

int main() {
    int n;
     int majority = 0;  
     int arr[n];
     int count = 0;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
       
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
   
        if (count > n / 2) {
            majority = arr[i];
            break; 
        }
    }

    if (majority != 0) {  
        printf("Majority Element: %d\n", majority);
    } else {
        printf("No majority element\n");
    }

    return 0;
}
