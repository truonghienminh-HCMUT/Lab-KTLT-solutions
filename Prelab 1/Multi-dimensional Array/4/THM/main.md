```cpp
int diagonalDiff(int arr[][1000], int row, int col, int x, int y) {
    int pri = 0, sec = 0;
    for (int i = x, j = y; i >= 0 && j >= 0; i--, j--) pri += arr[i][j];
    for (int i = x + 1, j = y + 1; i < row && j < col; i++, j++) pri += arr[i][j];
    for (int i = x, j = y; i >= 0 && j < col; i--, j++) sec += arr[i][j];
    for (int i = x + 1, j = y - 1; i < row && j >= 0; i++, j--) sec += arr[i][j];
    return abs(pri - sec);
}
```