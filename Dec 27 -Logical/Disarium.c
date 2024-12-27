//Write a program to determine if a given number is a Disarium number.




#include <stdio.h>

int main() {
    int number, temp, sum = 0, count = 0, digit;

   
    printf("Enter a number: ");
    scanf("%d", &number);

    
    temp = number;
    while (temp != 0) {
        temp = temp / 10; 
        count++;  
    }

    
    temp = number; 
    while (temp != 0) {
        digit = temp % 10;  
        int power = 1;

        
        for (int i = 1; i < count; i++) {
            power *= digit; 
        }

        sum += power;  
        temp = temp / 10;  
        count--;  
    }

    
    if (sum == number) {
        printf("%d is a Disarium number.\n", number);
    } else {
        printf("%d is not a Disarium number.\n", number);
    }

    return 0;
}
