```cpp
bool isSymmetric(int arr[][1000], int row, int col) {
    for (int i = 0; i < row; i++){
        for (int j = 0; j <= i ; j++){
            if (arr[i][j] != arr[j][i]) return false;
        }
    }
    return true;
}
```