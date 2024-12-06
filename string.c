
/*Given a string s, return the string s without any vowels ('a', 'e', 'i', 'o', 'u' both in lowercase and
uppercase).*/

#include <stdio.h>

int main() {
    char s[100];  
    int i, j = 0;

    
    printf("Enter a string: ");
    scanf("%s", s);

    
    for (i = 0; s[i] != '\0'; i++) {
       
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' &&
            s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U')
             {
            s[j] = s[i]; 
            j++;
        }
    }

     

   
    printf("Output: %s\n", s);
    
    return 0;
}
