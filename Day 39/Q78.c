//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/

#include <stdio.h>

int main() {
    int size, sum = 0;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &size);

    int matrix[size][size];

    // Reading matrix elements
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculating sum of main diagonal
    for (int i = 0; i < size; i++) {
        sum += matrix[i][i];
    }

    // Displaying result
    printf("\nSum of main diagonal elements: %d\n", sum);

    return 0;
}