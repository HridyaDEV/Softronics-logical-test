/*Given a positive integer num represented as a string, return the integer num without any non-
numeric characters (such as letters or symbols) as a string.*/

#include <stdio.h>

int main() {
    char num[100], result[100];  
    int i;
    int j;

   
    printf("Enter the string: ");
    scanf("%s", num); 

 
    for ( int i = 0; num[i] != '\0'; i++) {
        
        if (num[i] >= '0' && num[i] <= '9') {
            result[j++] = num[i];  
        }
    }

   

    
    printf("Output: %s\n", result);

    return 0;
}
