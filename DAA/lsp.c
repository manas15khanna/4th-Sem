// longest Common Subsequence(LCS)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to find LCS and print the actual subsequence
void lcs(char *X, char *Y, int m, int n) {
    int L[m + 1][n + 1];

    // Build the LCS table
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                L[i][j] = 0;
            else if (X[i - 1] == Y[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;
            else
                L[i][j] = (L[i - 1][j] > L[i][j - 1]) ? L[i - 1][j] : L[i][j - 1];
        }
    }

    // Length of LCS
    int index = L[m][n];

    // Create a character array to store the LCS string
    char lcsStr[index + 1];
    lcsStr[index] = '\0'; // Null-terminate the string

    // Start from the bottom-right corner and build the LCS string
    int i = m, j = n;
    while (i > 0 && j > 0) {
        if (X[i - 1] == Y[j - 1]) {
            lcsStr[index - 1] = X[i - 1]; // Put current char in result
            i--;
            j--;
            index--;
        }
        else if (L[i - 1][j] > L[i][j - 1])
            i--;
        else
            j--;
    }

    // Output the result
    printf("Length of Longest Common Subsequence is %d\n", L[m][n]);
    printf("Longest Common Subsequence (Z string) is \"%s\"\n", lcsStr);
}

int main() {
    char X[100], Y[100];
    printf("Enter first string: ");
    scanf("%s", X);
    printf("Enter second string: ");
    scanf("%s", Y);
    int m = strlen(X);
    int n = strlen(Y);
    lcs(X, Y, m, n);
    return 0;
}

