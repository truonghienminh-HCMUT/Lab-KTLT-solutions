```cpp
const int MAXN = 10000 + 7;
int prime[MAXN];

void init(){
    for (int i = 0; i < MAXN; i++){
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= MAXN; i++){
        if (prime[i]){
            for (int j = i * i; j < MAXN; j += i){
                prime[j] = 0;
            }
        }
    }
}

int primeColumns(int arr[][1000], int row, int col) {
    // init();
    int sum, count = 0;
    for (int j = 0; j < col; j++){
        sum = 0;
        for (int i = 0; i < row; i++){
            sum += arr[i][j];
        }
        // if(prime[sum]) count++;
        bool flag = true;
        for (int i = 2; i < sum - 1; i++){
            if (sum % i == 0) flag = false;
        }
        if (flag && sum >= 2) count++;
    }
    return count;
}
```