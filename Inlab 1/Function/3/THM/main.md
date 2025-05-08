```cpp
void encrypt(char* text, int shift) {
    // Write your code 
    shift = (shift % 26 + 26) % 26;
    for (int i = 0; text[i] != '\0'; i++){
        if (isalpha(text[i]))
            text[i] = (text[i] - (islower(text[i]) ? 'a' : 'A') + shift) % 26 + (islower(text[i]) ? 'a' : 'A');
    }
}

void decrypt(char* text, int shift) {
    // Write your code 
    shift = (shift % 26 + 26) % 26;
    for (int i = 0; text[i] != '\0'; i++){
        if (isalpha(text[i]))
            text[i] = (text[i] - (islower(text[i]) ? 'a' : 'A') - shift + 26) % 26 + (islower(text[i]) ? 'a' : 'A');
    }
}
```