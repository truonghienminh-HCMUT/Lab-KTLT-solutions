```cpp
const int MAXN = 10001;
bool prime[MAXN];
void init(){
    for (int i = 0; i < MAXN; i++){
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for (int i = 0; i < MAXN / 2; i++){
        if (prime[i]){
            for (int j = i * i; j < MAXN; j+=i) prime[j] = 0;
        }
    }
}

bool isSpecialNumber(int n) {
    init();
    // Write your code 
    int sum = 0, temp = n;
    while (temp){
        sum += temp % 10;
        temp /= 10;
    }
    return prime[sum] && prime[n];
}
```