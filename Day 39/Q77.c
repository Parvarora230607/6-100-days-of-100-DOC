//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/

#include <stdio.h>

int main() {
    int size, isDistinct = 1;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &size);

    int matrix[size][size];
    int diag[size];  // Array to store diagonal elements

    // Reading matrix elements
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Extracting diagonal elements
    for (int i = 0; i < size; i++) {
        diag[i] = matrix[i][i];
    }

    // Checking for duplicates in diagonal
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (diag[i] == diag[j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct)
            break;
    }

    // Result
    if (isDistinct)
        printf("\nAll diagonal elements are distinct.\n");
    else
        printf("\nDiagonal elements are not distinct.\n");

    return 0;
}