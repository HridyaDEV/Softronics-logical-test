/*You are given a string word.
Return true if word is valid, otherwise, return false.*/


#include <stdio.h>
#include <string.h>

int main() {
    char word[50];  
    int has_vowel = 0, has_consonant = 0;

    
    printf("Enter a word: ");
    scanf("%s", word);

    
    if (strlen(word) < 3) {
        printf("false\n");
        return 0; 
    }

    
    for (int i = 0; word[i] != '\0'; i++) {
        char c = word[i];

        
        if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
           
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                has_vowel = 1; 
            }
            
            else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
                has_consonant = 1;  
            }
        } else {
            
            printf("false\n");
            return 0;
        }
    }

   
    if (has_vowel && has_consonant) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
