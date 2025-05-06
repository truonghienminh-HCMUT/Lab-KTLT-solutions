```cpp
bool completeNum(int N)
{
    // TODO
    int sum = 0;
    for (int i = 1; i <= N / 2; i++){
        if (N % i == 0) sum += i;
    }
    return sum == N;
}
```