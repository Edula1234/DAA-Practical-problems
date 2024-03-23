#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

void multiplyMatrix(int mat1[][N], int mat2[][N], int res[][N], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++)
                res[i][j] += mat1[i][k] * mat2[k][j];
}

int main() {
    int mat1[N][N], mat2[N][N], res[N][N], n;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    srand(time(NULL));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            mat1[i][j] = rand() % 100, mat2[i][j] = rand() % 100;

    clock_t start = clock();
    multiplyMatrix(mat1, mat2, res, n);
    clock_t end = clock();

    printf("Time taken for matrix multiplication: %lf seconds\n", ((double)(end - start)) / CLOCKS_PER_SEC);

    return 0;
}

