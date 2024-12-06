/*A program to count the number of vowels, consonants, and digits in a given string.
The program should take a string input from the user and then display the counts of
vowels, consonants, and digits*/


#include <stdio.h>

int main() {
    char string[100];
    int vowelCount = 0, consCount = 0, digitCount = 0;
    int i;

    printf("Enter a string: ");
    scanf("%s", string); 

   
    for (i = 0; string[i] != '\0'; i++) {
        char ch = string[i];

        
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowelCount++;
        }
      
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consCount++;
        }
      
        else if (ch >= '0' && ch <= '9') {
            digitCount++;
        }
    }

   
    printf("Vowels: %d\n", vowelCount);
    printf("Consonants: %d\n", consCount);
    printf("Digits: %d\n", digitCount);

    return 0;
}
 
