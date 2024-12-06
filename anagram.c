#include <stdio.h>

/* 
Problem: Check if two input strings are anagrams. */





int main() {
    char str1[100], str2[100];
   int count1[26];
int count2[26];
    int i;

    for (int i = 0; str1[i]; i++) {
        if (str1[i] >= 'A' && str1[i] <= 'Z') {
            str1[i] = str1[i] + 32;
        }
    }
    for (int i = 0; str2[i]; i++) {
        if (str2[i] >= 'A' && str2[i] <= 'Z') {
            str2[i] = str2[i] + 32;
        }
    }

    int are_anagrams = 1;
    for(i = 0; i < 26; i++) {
        if(count1[i] != count2[i]) {
            are_anagrams = 0;
            break;
        }
    }

    if (are_anagrams) {
        printf("They are anagrams\n");
    } else {
        printf("Not anagrams\n");
    }

    return 0;
}
