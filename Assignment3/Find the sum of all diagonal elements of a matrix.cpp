#include <stdio.h>
int main() {
    int matrix[10][10], rows, cols, sum = 0;
    printf("Enter rows and columns (square matrix): ");
    scanf("%d %d", &rows, &cols);
    if (rows != cols) {
        printf("Matrix must be square!\n");
        return 1;
    }
    printf("Enter elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j) sum += matrix[i][j];
        }
    }
    printf("Sum of diagonal elements: %d\n", sum);
    return 0;
}
