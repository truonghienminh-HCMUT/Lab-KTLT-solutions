```cpp
void insertRow(int**& matrix, int r, int c, int* rowArr, int row) {
    if (rowArr == nullptr || matrix == nullptr) return;
    int** newMatrix = new int*[++r];
    newMatrix[row] = new int[c];
    for (int j = 0; j < c; j++) newMatrix[row][j] = rowArr[j];
    for (int i = 0; i < row; i++){
        if (matrix != nullptr && i < r) newMatrix[i] = matrix[i];
    }
    for (int i = row; i < r; i++){
        if (matrix != nullptr && i < r) newMatrix[i + 1] = matrix[i];
    }
    if (matrix != nullptr) delete[] matrix;
    
    matrix = newMatrix;
}
```