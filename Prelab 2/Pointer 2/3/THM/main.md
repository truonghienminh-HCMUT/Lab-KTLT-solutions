```cpp
int** deepCopy(int** matrix, int r, int c) {
    if (matrix == nullptr || r <= 0 || c <= 0) return nullptr;
    int** newMatrix = new int*[r];
    for (int i = 0; i < r; i++){
        newMatrix[i] = new int[c];
        for (int j = 0; j < c; j++){
            newMatrix[i][j] = matrix[i][j];
        }
    }
    return newMatrix;
}
```