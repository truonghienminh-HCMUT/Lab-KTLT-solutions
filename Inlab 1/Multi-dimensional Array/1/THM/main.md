```cpp
int ascendingRows(int arr[][1000], int row, int col) {
    int count = 0;
    for (int i = 0; i < row; i++){
        for (int j = 1; j < col; j++){
            if (arr[i][j] < arr[i][j - 1]) break;
            if (j == col - 1) count++;
        }
    }
    return count;
}
```