```cpp
bool isPalindrome(const char* str) {
    int n = 0;
    while (str[n] != '\0'){
        n++;
    }
    for (int i = 0; i < n / 2; i++){
        if (str[i] != str[n - i - 1]) return false;
    }
    return true;
}
```