```cpp
int diagonalProduct(int arr[][1000], int row, int col) {
    int sum = 1;
    for (int i = 0; i < row; i++){
        sum *= arr[i][i];
    }
    return sum;
}```