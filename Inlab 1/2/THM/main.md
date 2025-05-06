```cpp
void recover(char signal[]) {
    // TODO
    // int n = strlen(signal);
    char *c = signal;
    while (*c != '\0'){
        if (*c >= 'a' && *c <= 'z') *c -= 32;
        else if (*c >= 'A' && *c <= 'Z') *c += 32;
        c++;
    }
}```