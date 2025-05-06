```cpp
#include <iostream>

using namespace std;
// implement calculate factorial function in here

long long frac (int n){
    if (n == 0) return 1;
    return n * frac(n - 1);
}


int main(int narg, char** argv)
{
    int N;
    cin >> N;
    long result;
    // call function calculateFactorial in here and assign value to the variable result
    result = frac(N);

    cout << result << endl;
    return 0;
}
```