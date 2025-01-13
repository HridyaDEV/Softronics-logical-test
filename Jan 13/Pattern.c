#include <stdio.h>

int main() {
    int rows;
    char ch = 'A';  

 
    printf("Enter the number of rows: ");
    scanf("%d", &rows);


    for (int i = 1; i <= rows; i++) {
    
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

     
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch);
        }
        
       
        printf("\n");

        ch++;
    }

    return 0;
}
