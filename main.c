#include <stdio.h>
#include "matrix_c.h"

int main() {
    int A[] = {6, 4, 8, 3}; // 2x2
    int B[] = {1, 2, 3, 4, 5, 6}; // 2x3
    int C[] = {2, 4, 6, 1, 3, 5}; // 2x3

   // Step 1: Calculate 3B
   int B3[6]; // 2x3
   scalarMultiply(2, 3, B, 3, B3);

   // Step 2: Transpose matrix C (2x3) → CT (3x2)
   int CT[6]; // 3x2
   transposeMatrix(2, 3, C, CT);

   // Step 3: Multiply (3B) × (C^T) → result is 2x2
   int product[4]; // 2x2
   multiplyMatrices(2, 3, B3, 3, 2, CT, product);

   // Step 4: Add A + product
   int D[4]; // 2x2
   addMatrices(2, 2, A, product, D);

   // Display the result
   printf("Matrix D = A + (3B * C^T):\n");
   printMatrix(2, 2, D);

   return 0;
}
