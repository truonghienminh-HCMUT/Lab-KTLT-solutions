```cpp
void deleteMatrix(int**& matrix, int r) {
    if (matrix == nullptr) return;
    for (int i = 0; i < r; i++){
        if (matrix[i] != nullptr){
            delete[] matrix[i];
            matrix[i] = nullptr;
        }
    }
    
    delete[] matrix;
    matrix = nullptr;
}
```