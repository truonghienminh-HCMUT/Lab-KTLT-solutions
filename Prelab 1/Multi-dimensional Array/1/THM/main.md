```cpp
int findMaxColumn(int arr[][1000], int row, int col) {
    int maxx = -1e9, sum = 0, res;
    for (int i = 0; i < col; i++){
        sum = 0;
        for (int j = 0; j < row; j++){
            sum += arr[j][i];
        }
        if (sum >= maxx){
            maxx = sum;
            res = i;
        }
    }
    return res;
}
```