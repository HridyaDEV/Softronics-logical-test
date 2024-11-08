//Given an integer n,return any array containing n unique intgers such that they add up to 0
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    
    printf("Enter an integer n: ");
    scanf("%d", &n);

    int result[n]; 

    int index = 0;

    
    if (n % 2 != 0) {
        result[index++] = 0;
    }

   
    for (int i = 1; index < n; i++) {
        result[index++] = i;
        result[index++] = -i;
    }

   
    printf("Result: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
