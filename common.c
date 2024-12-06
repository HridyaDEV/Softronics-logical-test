#include <stdio.h>

// Problem Statement: Write a C program that takes two strings as input 
// and checks if there are any common characters between the two strings.

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

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

    int found = 0;
    for (int i = 0; str1[i]; i++) {
        for (int j = 0; str2[j]; j++) {
            if (str1[i] == str2[j]) {
                found = 1;
                break;
            }
        }
        if (found) {
            break;
        }
    }

    if (found) {
        printf("Common characters found\n");
    } else {
        printf("No common characters\n");
    }

    return 0;
}
