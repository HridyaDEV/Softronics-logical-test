#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char strs[100][100];
    char prefix[100];
    int prefixLength;

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    printf("Enter the strings:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%s", strs[i]);
    }

    for (int i = 1; i < n; i++)
    {
        int j = 0;

        while (j < prefixLength && prefix[j] == strs[i][j])
        {
            j++;
        }

        prefixLength = j;

        if (prefixLength == 0)
        {
            printf("No common prefix found.\n");
            return 0;
        }
    }

    printf("Longest Common Prefix: %s\n", prefix);

    return 0;
}
