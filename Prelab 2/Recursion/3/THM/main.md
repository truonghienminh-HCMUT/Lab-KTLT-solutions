```cpp
int strLen(char* str){ 
    if (*str == '\0') return 0;
    return 1 + strLen(str + 1);
}
```
