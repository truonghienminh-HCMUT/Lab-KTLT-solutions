```cpp
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int specialCells(int arr[][1000], int row, int col) {
    int count = 0;
    
    int* rowSum = new int[row];
    int* colSum = new int[col];
    
    for (int i = 0; i < row; i++) {
        rowSum[i] = 0;
        for (int j = 0; j < col; j++) {
            rowSum[i] += arr[i][j];
        }
    }
    
    for (int j = 0; j < col; j++) {
        colSum[j] = 0;
        for (int i = 0; i < row; i++) {
            colSum[j] += arr[i][j];
        }
    }
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (isPrime(rowSum[i]) && isPrime(colSum[j])) {
                count++;
            }
        }
    }
    
    delete[] rowSum;
    delete[] colSum;
return count;
}
```
